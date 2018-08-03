#include <stdio.h>
main(){
    system("date /t");
    system("time /t");
    printf("DATA: %s\nHORA: %s",__DATE__,__TIME__);
}
