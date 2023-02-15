#include "utils.h"

void	ft_execute(char **execute)
{
	char	*s;
	char	*eq;

	s = execute[0];
	eq = ft_strchr(s, '=');
	if (eq)
		printf("You wanted to assign %s to %s", eq + 1, ft_substr(s, 0, eq - s));
	else
	{
		;
	}
	printf("\n");
}
