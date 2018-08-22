//questao 08 UFU
#include <stdio.h>
main(){
    int n,i=0,maior, menor;
    printf("DIGITE DEZ NUMEROS \n");
    while(scanf("%d",&n)&&i<10){
        if(i==0){
            maior=n;
            menor=n;
        }else{
            if(n>maior){
                maior=n;
            }else{
                if(n<menor){
                    menor=n;
                }
            }
        }
        i++;
    }
    printf("\nMAIOR %d\nMENOR %d\n",maior, menor);
}
