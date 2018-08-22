//questao 07 UFU
#include <stdio.h>
main(){
    int n,i=0,s=0;
    printf("DIGITE DEZ NUMEROS INTEIROS POSITIVOS\n");
    while(scanf("%d",&n)&&i<10){
        if(n>0){
            s+=n;
            i++;
        }else{
            printf("\n!!DIGITE UM VALOR POSITIVO\n");
        }
    }
    printf("\nA MEDIA DOS VALORES DIGITADOS %.2f\n",(float)s/10);
}
