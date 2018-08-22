//questao 21 UFU
#include <stdio.h>
main(){
    int min,max, soma=0, produto=1;
    printf("DIGITE OS LIMITES MIN E MAX\n\n");
    printf("MIN ");
    scanf("%d",&min);
    printf("\nMAX ");
    scanf("%d",&max);
    if(min>max){
        int a;
        a=min;
        min=max;
        max=a;
    }
    for(;min<=max;min++){
        if(min%2==0){
            soma+=min;
        }else{
            produto*=min;
        }
    }
    printf("\nSOMA DOS PARES %d\nPRODUTO DOS IMPARES %d\n",soma,produto);
}
