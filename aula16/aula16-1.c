#include <stdio.h>
void maiorMenor(int v[],int tam, int *maior, int *menor){
    int i;
    *maior=v[0];
    *menor=v[0];
    for(i=1;i<tam;i++){
        if(*maior<v[i]){
            *maior=v[i];
        }else{
            if(*menor>v[i]){
                *menor=v[i];
            }
        }
    }
}
main(){
    int vetor[5]={-1, 0 ,3, 10},maior, menor;
    maiorMenor(vetor, 5, &maior, &menor);
    printf("maior %d\nMenor %d\n\n",maior, menor);
}
