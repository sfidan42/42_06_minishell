#include "utils.h"

void	ft_executor(char **execute, char **argw)
{
	char	*s;
	char	*eq;
	char	*sl;

	s = execute[0];
	eq = ft_strchr(s, '=');
	sl = ft_strchr(s, '/');
	if (eq)
	{
		printf("You wanted to assign %s to %s", eq + 1, ft_substr(s, 0, eq - s));
		;
	}
	else if (sl)
	{
		printf("You meant to use bin program!");
		execve(execute[0], execute, argw);
		perror("error on execve!\n");
	}
	else
	{
		printf("You wanted to use some command.");
		execve("bin/ls", execute, argw);
		perror("error on execve!\n");
	}
	printf("\n");
}
