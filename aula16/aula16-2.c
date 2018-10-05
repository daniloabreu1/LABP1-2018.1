#include <stdio.h>
int *maiorValor(int v[],int tam){
    int i,maior=v[0],m=0;
    for(i=1;i<tam;i++){
        if(maior<v[i]){
            maior=v[i];
            m=i;
        }
    }
    return &v[m];
}
main(){
    int vetor[5]={-1, 0 ,3, 10},maior;
    printf("maior %d\n",*maiorValor(vetor,5));
}
