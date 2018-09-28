//QUESTAO 02
#include <stdio.h>
#include <string.h>
int contarVogais(char texto[21]){
    int i,c=0;
    for(i=0;texto[i]!='\0';i++){
        switch(texto[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                c++;
                break;
            default:
                continue;
        }
    }
    return c;
}
void trocarVogal(char texto[21],char c){
    int t= strlen(texto);
    for(t-=1;t>=0;t--){
        switch(texto[t]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                texto[t]=c;
                break;
            default:
                continue;
        }
    }
}
main(){
    char frase[21],c;
    printf("DIGITE UM TEXTO ");
    gets(frase);
    printf("VOGAIS:%d\n",contarVogais(frase));
    printf("DIGITE UM CARACTERE ");
    fflush(stdin);
    c=getchar();
    trocarVogal(frase,c);
    puts(frase);
}
