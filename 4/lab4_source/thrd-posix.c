/**
 * A pthread program illustrating how to
 * create a simple thread and some of the pthread API
 * This program implements the summation function where
 * the summation operation is run as a separate thread.
 *
 * Most Unix/Linux/OS X users
 * gcc thrd-posix.c -lpthread
 *
 */

#include <pthread.h>
#include <stdio.h>

int result = 5; /* this data is shared by the thread(s) */

void *runner(void *param); /* the thread */

int main(int argc, char *argv[])
{
	pthread_t tid; /* the thread identifier */
	pthread_attr_t attr; /* set of attributes for the thread */
	
	if (argc != 2) {
		fprintf(stderr,"usage: a.out <integer value>\n");
		return -1;
	}
	
	/* get the default attributes */
	pthread_attr_init(&attr);
	
	/* create the thread */
	pthread_create(&tid,&attr,runner,argv[1]);
	
	/* now wait for the thread to exit */
	pthread_join(tid,NULL);
	
	printf("result = %d\n",result);
}

/**
 * The thread will begin control in this function
 */
void *runner(void *param) 
{
	int n = atoi(param);
	
	if (n < 0)
		result *= -1;
	else if (n > 0)
		result *= 2;
	
	pthread_exit(0);
}
