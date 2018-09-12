#include <stdio.h>
int ehVogal(char c){
    switch(c){
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
            return 1;
        default:
            return 0;
    }
}
main(){
    char letra;
    printf("Digite uma letra ");
    scanf("%c",&letra);
    ehVogal(letra)?printf("%c Eh vogal\n",letra):printf("%c Nao Eh vogal\n",letra);
}
