#include <stdio.h>
main(){
    int i,a[6];
    for(i=0;i<6;i++){
        printf("Digite o elemento a[%d] ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
}
