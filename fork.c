#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;
    pid = fork();
    if (pid > 0) {
        printf("This is parent id s%d\n", getpid());
    }
    else if (pid == 0) {
        printf("fork sucess %d \n", getpid());
        printf("fork parent process id %d\n", getppid());
    }
}
