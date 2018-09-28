//QUESTAO 01
#include <stdio.h>
#include <string.h>
int tamanho(char texto[21]){
    int r=0, i;
    for(i=0;texto[i]!='\0';i++){
        r++;
    }
    return r;
}
void impressaoInvertida(char texto[21]){
    int t = tamanho(texto);
    printf("FRASE INVERTIDA:\n");
    for(t=t-1;t>=0;t--){
        printf("%c",texto[t]);
    }
}
main(){
    char frase[21];
    printf("DIGITE UM TEXTO ");
    gets(frase);
    printf("FRASE ORIGINAL:\n%s\n",frase);
    impressaoInvertida(frase);
}
