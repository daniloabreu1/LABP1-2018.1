#include <stdio.h>
main(){
    int n1, n2;
    float resultado;
    printf("DIGITE DOIS NUMEROS INTEIROS ");
    scanf("%d %d", &n1, &n2);
    resultado= (float)n1/ (float)n2;
    printf("%.2f",resultado);
}
