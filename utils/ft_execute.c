#include "utils.h"
/*
void	ft_command_choose(char *command)
{
	if (command == 0)
		ft_ls();
	else if (command == 1)
		ft_pwd();
	else if (command == 2)
		ft_echo();
	else if (command == 3)
		ft_cat();
	else if (command == 4)
		ft_export();
	else if (command == 5)
		ft_exit();
}
*/
void	ft_execute(char **execute, char **argw)
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
		execve("bin/ft_ls", execute, argw);
	}
	printf("\n");
}
