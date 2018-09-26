#include <stdio.h>
#define DIM 4
void getValores(int m[DIM][DIM]){
    int i,j;
    putchar('\n');
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            printf("Valor [%d][%d] >>> ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
}
void matrizMaior(int a[DIM][DIM],int b[DIM][DIM],int c[DIM][DIM]){
    int i,j;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            if(a[i][j]>=b[i][j]){
                c[i][j]=a[i][j];
            }else{
                c[i][j]=b[i][j];
            }
        }
    }
}
void imprimirMatriz(int m[DIM][DIM]){
    int i,j;
    printf("\nMatriz\n");
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            printf("%4d ",m[i][j]);
        }
        putchar('\n');
    }
}
main(){
    int a[DIM][DIM],b[DIM][DIM],c[DIM][DIM];
    getValores(a);
    getValores(b);
    matrizMaior(a,b,c);
    imprimirMatriz(a);
    imprimirMatriz(b);
    imprimirMatriz(c);
}
