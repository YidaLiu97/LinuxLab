#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/* the elements in the list */
struct element {
    int data;
    struct element *next;
};

// a pointer to the head of the list
struct element *head;

// a temporary pointer used for freeing memory
struct element *temp;

void *collatz(void *param); /* the thread */

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
	pthread_create(&tid,&attr,collatz,argv[1]);
	
	/* now wait for the thread to exit */
	pthread_join(tid,NULL);

}

void *collatz(void *param) 
{
	int n = atoi(param);
	
    struct element *node;

    // malloc allocates the memory to hold a struct element
    node = (struct element *) malloc(sizeof(struct element));
    head = node;

   
    do{
        // populate the list
        node->data = n;
        node->next = (struct element *) malloc(sizeof(struct element));

        node = node->next;

        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
    } while (n != 1);

    node->data = n;
    node->next = (struct element *) malloc(sizeof(struct element));

    node = node->next;

    node->next = NULL;

    // traverse the list
    while (head->next != NULL)
    {
        printf("%d  ",head->data);

        // free memory after visiting a node        
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("\n");
    return 0;
	
}