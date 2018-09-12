#include <stdio.h>
int fatorial(int n){
    int f=1;
    for(;n>1;n--){
        f*=n;
    }
    /*
    while(n>1){
        f*=n;
        n--;
    }
    */
    return f;
}
main(){
    int num;
    printf("Digite um numero inteiro ");
    scanf("%d",&num);
    printf("Fatorial de %d = %d\n",num, fatorial(num));
}
