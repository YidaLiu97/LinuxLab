#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	pid_t pid;

	/* make sure the correct number of parameters have been passed on the command line */
	if (argc != 2) {
		fprintf(stderr,"Usage: ./example <int value>\n");
		exit(1);
	}

	pid = fork();

	if (pid == 0) {
		execlp("/home/yida/Linux/Lab/4/lab4_source/out", "out", argv[1], NULL);
		fprintf(stderr, "Error\n");
	}
	else
		wait(NULL);

	return 0;
}
