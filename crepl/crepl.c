#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  static char line[4096];
  char tmp[4];
  while (1) {
    printf("crepl> ");
    memset(line,'\0',sizeof(line));
    memset(tmp,'\0',sizeof(tmp));
    fflush(stdout);
    if (!fgets(line, sizeof(line), stdin)) {
      break;
    }
    sscanf(tmp,"%3s",line);
    if(strncmp(tmp,"int",3)==0){
      printf("It's a function\n");
    }
    else{
      printf("It's a expression\n");
    }
    for(int i=0;i<strlen(line);i++){
      printf("%d-",line[i]);
    }
    printf("##%d,%d##\n",'\n','r');
    printf("Got %zu chars.\n", strlen(line)); // WTF?
  }
}
