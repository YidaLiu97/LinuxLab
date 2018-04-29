#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void file(char *argv){
  struct stat st;
  stat(argv,&st);
  printf("is a file.\n");
  if(st.st_mode&S_IWUSR==S_IWUSR){
    chmod(argv,0777);
  }
}
