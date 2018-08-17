#include <stdio.h>
#include <math.h>
main(){
    float num;
    printf("DIGITE UM NUMERO ");
    scanf("%f",&num);
    num >=0 ? printf("RAIZ QUADRADA %.2f\n",sqrt(num)):printf("QUADRADO %.2f\n",pow(num,2));
}
