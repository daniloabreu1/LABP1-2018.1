#include <stdio.h>
main(){
    int n1,n2, limite;
    char o;
    printf("DIGITE O LIMITE ");
    scanf("%d",&limite);
    printf("DIGITE A EXPRESSAO NUMERO OPERADOR NUMERO\n");
    printf("UTILIZE APENAS * OU + COMO OPERADOR\n");
    scanf("%d %c %d",&n1,&o,&n2);
    if(o=='+'){
            if(n1+n2<=limite){
                printf("OK\n");
            }else{
                printf("OVERFLOW\n");
            }
    }else{
        if(o=='*'){
            if(n1*n2<=limite){
                printf("OK\n");
            }else{
                printf("OVERFLOW\n");
            }
        }else{
            printf("OPERADOR INVALIDO\n");
        }
    }
}
