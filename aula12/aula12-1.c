#include <stdio.h>
main(){
    int i,soma,a[6]={1,0,5,-2,-5,7};
    soma=a[0]+a[1]+a[5];
    printf("Soma dos elementos [0][1][5] = %d\n",soma);
    a[3]=100;
    for(i=0;i<6;i++){
        printf("%d\n",a[i]);
    }
}
