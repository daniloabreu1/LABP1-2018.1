//questao 24 UFU
#include <stdio.h>
#include <limits.h>
main(){
    int n,i=1,soma=0;
    printf("DIGITE UM NUMEROS ");
    scanf("%d",&n);
    while(i<=n/2){
        if(n%i==0){
            soma+=i;
        }
        i++;
    }
    printf("\nA SOMA DOS DIVISORES DE %d = %d\n",n,soma);
}
