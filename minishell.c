#include "minishell.h"

int	main(int argc, char **argv, char **argw)
{
	char	*line;

	(void)argw;
	if (argc != 1)
	{
		printf("What am I supposed to do with \"%s, ...\"??\n", argv[1]);
		return (1);
	}
	printf("Hi, this is the minishell project!\n");
	while (1)
	{
		line = readline("\033[0;32mminishell $>\033[0;37m");
		if (!ft_strncmp(line, "exit", 4))
		{
			printf("exits...");
			return(0);
		}
		if (*line)
			add_history(line);
		free(line);
		
	}
	return (0);
}
