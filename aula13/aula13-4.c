#include <stdio.h>
#define DIM 5
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
void buscaValor(int m[DIM][DIM],int n){
    int i,j;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            if(m[i][j]==n){
                printf("\nIndice [%d][%d]\n",i,j);
                return;
            }
        }
    }
    printf("\nNao encontrado\n");
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
    int a[DIM][DIM],n;
    getValores(a);
    imprimirMatriz(a);
    printf("\nN >>> ");
    scanf("%d",&n);
    buscaValor(a,n);
}
