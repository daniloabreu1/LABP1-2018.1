#include <stdio.h>
#include <math.h>
//constante pi M_PI
void calculo(float *a,float *c,float r){
    *a=M_PI*pow(r,2);
    *c=2*M_PI*r;
}
main(){
    float area, cumpr;
    calculo(&area,&cumpr, 3);
    printf("Raio = 3\nArea = %.3f\nCumprimento = %.3f",area,cumpr);
}
