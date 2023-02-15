#include "minishell.h"

int	main(int argc, char **argv, char **argw)
{
	char	*line;
	char	**prompt;
	int		i;

	if (argc != 1)
	{
		printf("What am I supposed to do with \"%s, ...\"??\n", argv[1]);
		return (0);
	}
	(void)argw;
	printf("Hi, this is the minishell project!\n");
	while (1)
	{
		line = readline("\033[0;32mminishell $>\033[0;37m");
		if (line[0] == '\n')
			printf("%s\n", line);
		add_history(line);
		prompt = ft_split(line, '|');
		i = 0;
		while (prompt[i])
			ft_execute(ft_split(prompt[i++], ' '));
		free(line);
		free(prompt);
	}
	return (0);

}
