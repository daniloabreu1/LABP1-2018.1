//questao 08 UFU
#include <stdio.h>
#include <limits.h>
main(){
    int n,i=0,maior = INT_MIN, menor= INT_MAX;
    printf("DIGITE DEZ NUMEROS \n");
    while(scanf("%d",&n)&&i<10){
        if(n>maior){
            maior=n;
        }else{
            if(n<menor){
                menor=n;
            }
        }
        i++;
    }
    printf("\nMAIOR %d\nMENOR %d\n",maior, menor);
}
