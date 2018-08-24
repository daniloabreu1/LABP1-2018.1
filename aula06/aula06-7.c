//questao 61 UFU
#include <stdio.h>
main(){
    int i,j,maior=0,aux,reverso,mi,mj;
    for(i=100; i<=999; i++){
        for(j=100; j<=999; j++){
            aux = i*j;
            reverso = 0;
            while (aux != 0){
                reverso = reverso * 10 + aux % 10;
                aux = aux / 10;
            }
            if (reverso == i*j){
                    if(i*j>maior){
                        maior=i*j;
                        mi=i;
                        mj=j;
                    }
            }
        }
    }
    printf("maior palindromo %d x %d = %d\n",mi,mj,maior);
}
