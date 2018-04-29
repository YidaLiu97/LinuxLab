#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	pid_t pid;

	pid = fork();

	if (pid == 0) {
		execlp("/home/yida/Linux/Lab/4/lab4_source/collatz", "collatz", argv[1], NULL);
		fprintf(stderr, "Error\n");
	}
	else
		wait(NULL);

	return 0;
}
