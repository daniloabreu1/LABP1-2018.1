#include <stdio.h>
#include <string.h>
main(){
    char t[20]="amarelo";
    char *p=strstr(t,"x");
    if(p==NULL){
        printf("nulo");
    }
    printf("%s\n",p);
}
