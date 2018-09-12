#include <stdio.h>
int imparPar(int n){
    if(n%2==0){
        return 0;
    }
    return 1;
}
main(){
    int num;
    printf("Digite um numero inteiro ");
    scanf("%d",&num);
    imparPar(num)?printf("Numero Impar\n"):printf("Numero Par\n");
}
