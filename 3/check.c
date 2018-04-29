#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc){
  struct stat st;
  char argv[15];
  scanf("%s",argv);

  stat(argv,&st);
  if(S_ISDIR(st.st_mode))
    dir();

  else if(S_ISREG(st.st_mode)){
    file(argv);
  }
  else
    printf("not dir or file.\n");
  return 0;
}
