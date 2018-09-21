//questao 5
#include <stdio.h>
main(){
    int a[10],par=0, i;

    for(i=0;i<10;i++){
        printf("Digite o elemento a[%d] ",i);
        scanf("%d",&a[i]);
    }

    putchar('\n');

    for(i=0;i<10;i++){
       if(a[i]%2==0){
            par++;
            printf("%d ",a[i]);
       }
    }
    printf("\n\nTemos %d numeros pares\n",par);

    putchar('\n');
}
