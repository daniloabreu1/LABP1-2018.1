#include <stdio.h>
void f4(){
    printf("Inicio da funcao F4\n");
    printf("Fim da funcao F4\n");
    return;
}
void f3(){
    printf("Inicio da funcao F3\n");
    f4();
    printf("Fim da funcao F3\n");
    return;
}
void f2(){
    printf("Inicio da funcao F2\n");
    f3();
    printf("Fim da funcao F2\n");
    return;
}
void f1(){
    printf("Inicio da funcao F1\n");
    f2();
    printf("Fim da funcao F1\n");
    return;
}
main(){
    printf("Inicio da funcao main\n");
    f1();
    printf("Fim da funcao main\n");
}
