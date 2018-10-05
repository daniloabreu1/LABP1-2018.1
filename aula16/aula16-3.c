#include <stdio.h>
void troca(float *a,float *b){
    float aux = *a;
    *a=*b;
    *b=aux;
}
main(){
    float f1=10.1,f2=7.897;
    printf("f1= %.3f\nf2= %.3f",f1,f2);
    troca(&f1,&f2);
    printf("\n\nf1= %.3f\nf2= %.3f",f1,f2);
}
