#include <stdio.h>
int dobro(int n){
    return n*2;
}
main(){
    int num,d;
    printf("Digite um numero inteiro ");
    scanf("%d",&num);
    d=dobro(num);
    printf("O dobro de %d = %d\n",num, d);
}
