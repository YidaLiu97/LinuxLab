#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
    if (argc != 2) {
		fprintf(stderr,"Usage: ./example <int value>\n");
		exit(1);
	}

    pid_t pid;
    pid = fork();
    
    if(pid < 0){
        fprintf(stderr,"ERROR:fork() failed!\n");
    }
    
    else if(pid==0){
        int n=atoi(argv[1]);
        printf("%d  ",n);
        do{
            if(n%2==0){
                n=n/2;
            }
            else{
                n=3*n+1;
            }
            printf("%d  ",n);
        }while(n!=1);
        printf("\n");
    }
    else{
        wait(NULL);
    }
    return 0;
}
