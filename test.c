#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    int fd[2];
    pid_t pid;
    char    *line;

    line = malloc(5);
    if (pipe(fd) < 0) {
        perror("pipe");
        exit(1);
    }
    pid = fork();
    for(int i = 0; i < 10; i++)
    {
        if (pid < 0) {
            perror("fork");
        }
        if (pid == 0) {
            /* Child process */
            close(fd[1]); // Close the write end of the pipe
            dup2(fd[0], STDIN_FILENO); // Redirect stdin to the read end of the pipe
            read(fd[0], line, 5);
        
        } else {
            /* Parent process */
            close(fd[0]); // Close the read end of the pipe
            dup2(fd[1], STDOUT_FILENO); // Redirect stdout to the write end of the pipe
            write(fd[1], line, 5);

        }
    }

    return 0;
}