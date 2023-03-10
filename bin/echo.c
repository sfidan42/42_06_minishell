#include "bin.h"

int main(int c, char **argv, char **argw)
{
    (void)c;
    (void)argw;    
    printf("\n\n"); 
    while (*argv++)
        printf("%s ", *argv);
    
    return (EXIT_SUCCESS);
}