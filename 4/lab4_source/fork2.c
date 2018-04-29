#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void fork2()
{
    printf("L0\n");
    fork();
    printf("L1\n");    
    fork();
    printf("Bye\n");
}

void main(){
    fork2();
}
