//QUESTAO 03
#include <stdio.h>
#include <string.h>
//verifica se o caractere eh uma letra
int ehLetra(char l){
    if((l>=65&&l<=90)||(l>=97&&l<=122)){
        return 1;
    }
    return 0;
}
void upperCase(char texto[21]){
    int i;
    for(i=0;texto[i]!='\0';i++){
        if(ehLetra(texto[i])){
            if((texto[i]>=97&&texto[i]<=122)){
                texto[i]-=32;
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
}
void lowerCase(char texto[21]){
    int i;
    for(i=0;texto[i]!='\0';i++){
        if(ehLetra(texto[i])){
            if((texto[i]>=65&&texto[i]<=90)){
                texto[i]+=32;
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
}
main(){
    char frase[21],c;
    printf("DIGITE UMA PALAVRA: ");
    gets(frase);
    printf("PALAVRA ORIGINAL: %s\n",frase);
    upperCase(frase);
    printf("PALAVRA MAIUSCULA: %s\n",frase);
    lowerCase(frase);
    printf("PALAVRA MINUSCULA: %s\n",frase);
}
