#include <stdio.h>
#define DIM 5
void getValores(int v[DIM]){
    int i;
    putchar('\n');
    for(i=0;i<DIM;i++){
        printf("Valor >>> ");
        scanf("%d",&v[i]);
    }
}
int escalar(int x[DIM],int y[DIM]){
    int i,s=0;
    for(i=0;i<DIM;i++){
        s+=x[i]*y[i];
    }
    return s;
}
main(){
    int x[DIM],y[DIM];
    getValores(x);
    getValores(y);
    printf("\nProduto Escalar >>> %d\n",escalar(x,y));
}
