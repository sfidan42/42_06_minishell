#include "utils.h"

void	ft_exit(char *msg)
{
	//rl_clear_history();
	printf("%s", msg);
	exit(0);
}
