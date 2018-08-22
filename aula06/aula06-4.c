//questao 18 UFU
#include <stdio.h>
#include <limits.h>
main(){
    int n,q,r,i=0,maior = INT_MIN;
    printf("DIGITE A QUANTIDADE DE NUMEROS ");
    scanf("%d",&r);
    while(i<r){
        printf("DIGITE UM NUMERO ");
        scanf("%d",&n);
        if(n>maior){
            maior=n;
            q=1;
        }else{
            if(n==maior){
                q++;
            }
        }
        i++;
    }
    printf("\nMAIOR %d\nVEZES DIGITADO %d\n",maior, q);
}
