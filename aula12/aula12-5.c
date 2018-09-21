//questao 9
#include <stdio.h>
main(){
    int a[6],i=0,n;
    while(i<6){
        printf("Digite o elemento par ");
        scanf("%d",&n);
        if(n%2==0){
            a[i]=n;
            i++;
        }
    }

    putchar('\n');

    for(i=5;i>=0;i--){
            printf("%d ",a[i]);
    }

    putchar('\n');
}
