#include <stdio.h>
main(){
    float real,cot;
    printf("DIGITE UM VALOR EM R$ ");
    scanf("%f", &real);
    printf("DIGITE A COTACAO DO DOLAR ");
    scanf("%f", &cot);
    printf("R$ %.2f EQUIVALE A DOLARES US$ %.2f",real, real/cot);
}
