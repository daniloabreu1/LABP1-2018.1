#include <stdio.h>
int bissexto(int n){
    if((n%4==0 && n%100!=0)||(n%400==0)){
        return 1;
    }
    return 0;
}
main(){
    int num;
    printf("Digite um numero inteiro ");
    scanf("%d",&num);
    bissexto(num)?printf("%d Eh bissexto\n",num):printf("%d Nao Eh bissexto\n",num);
}
