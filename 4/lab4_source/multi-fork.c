//* Originally from Yale's SMP Lab 1 

#include <stdio.h>

int main()
{
	printf("%d\n",getpid());
	fork();
	printf("%d\n",getpid());
	

	fork();
	printf("%d\n",getpid());

	fork();
	printf("%d\n",getpid());

	return 0;
}