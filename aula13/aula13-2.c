#include <stdio.h>
#define DIM 3
void getValores(int m[DIM][DIM]){
    int i,j;
    putchar('\n');
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            printf("Valor >>> ");
            scanf("%d",&m[i][j]);
        }
    }
}
void somaColuna(int m[DIM][DIM],int v[DIM]){
    int i,j;
    for(i=0;i<DIM;i++){
        v[i]=0;
        for(j=0;j<DIM;j++){
            v[i]+=m[j][i];
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
void imprimirVetor(int v[DIM]){
    int i;
    printf("\nVetor\n");
    for(i=0;i<DIM;i++){
        printf("%4d ",v[i]);
    }
    putchar('\n');
}
main(){
    int m[DIM][DIM],v[DIM];
    getValores(m);
    somaColuna(m,v);
    imprimirMatriz(m);
    imprimirVetor(v);
}
