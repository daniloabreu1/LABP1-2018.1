//QUESTAO 01
#include <stdio.h>
#include <string.h>
//tamanho da string
int tamanho(char texto[21]){
    int r=0, i;
    for(i=0;texto[i]!='\0';i++){
        r++;
    }
    return r;
}
//apenas imprime invertida
void impressaoInvertida(char texto[21]){
    int t = tamanho(texto);
    printf("FRASE INVERTIDA:\n");
    for(t=t-1;t>=0;t--){
        printf("%c",texto[t]);
    }
    puts("\n");
}
//inverte a string
void swapString(char original[21]){
    int i,j,t = tamanho(original);
    char aux;
    for(i=0,j=t-1;i<t/2;i++,j--){
        aux=original[i];
        original[i]=original[j];
        original[j]=aux;
    }
}
//coloca a string invertida em outra string
void trocaString(char origem[21], char destino[21]){
    int i,j,t = tamanho(origem);
    for(i=0,j=t-1;i<t;i++,j--){
        destino[i]=origem[j];

    }
    destino[i]='\0';
}
main(){
    char frase[21],invertida[21];
    printf("DIGITE UM TEXTO ");
    gets(frase);
    printf("FRASE ORIGINAL:\n");
    puts(frase);
    //impressaoInvertida(frase);
    printf("\nFRASE INVERTIDA:\n");
    //swapString(frase);
    trocaString(frase, invertida);
    puts(invertida);
}
