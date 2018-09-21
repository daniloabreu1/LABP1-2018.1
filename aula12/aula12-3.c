#include <stdio.h>
main(){
    float a[10],b[10];
    int i;

    for(i=0;i<10;i++){
        printf("Digite o elemento a[%d] ",i);
        scanf("%f",&a[i]);
        b[i]=a[i]*a[i];
    }

    printf("\nVetor A\n");
    for(i=0;i<10;i++){
        printf("%.2f ",a[i]);
    }
    printf("\n\nVetor B\n");
    for(i=0;i<10;i++){
        printf("%.2f ",b[i]);
    }
    putchar('\n');
}
