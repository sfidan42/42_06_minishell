#include "minishell.h"

static void	ft_signal_handler(int sig)
{
	if (sig == SIGINT)
		write(STDOUT, "\n\033[0;32m⛄️minishell $>\033[0;37m", 34);
}

int	main(int argc, char **argv, char **argw)
{
	char	*line;
	int 	ctrl;
	t_list	*tree;

	(void)argv;
	(void)argw;
	line = malloc(4096);
	if (argc != 1)
	{
		printf("What am I supposed to do with \"%s, ...\"??\n", argv[1]);
		return (EXIT_FAILURE);
	}
	printf("Hi, this is the minishell project!\n");
	signal(SIGQUIT, ft_signal_handler);
	signal(SIGINT, ft_signal_handler);
	while(42)
	{
		write(STDOUT, "\033[0;32m⛄️minishell $>\033[0;37m", 33);
		ctrl = read(STDOUT, line, 4096);
		if (ctrl < 0)
			perror("read");
		if (!ctrl)
		{
			printf("👋\n");
			return (EXIT_SUCCESS);
		}
		tree = ft_lexer(line);
	}
	return (EXIT_SUCCESS);
}
