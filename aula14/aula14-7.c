#include <stdio.h>
#include <string.h>
//verifica o tamanho da string
int tamanho(char p[21]){
    int t=0, i=0;
    for(t=0,i=0;p[i]!='\0'; t++,i++);
    return t;
}
//verifica se eh substring
int subString(char palavra[21],char sub[21]){
    int i=0,j=0, r=0;
    while(palavra[i]!='\0'){
        if(palavra[i]!=sub[j]){
            i++;
            continue;
        }else{
            r++;
            i++;
            j++;
            while(sub[j]!='\0'){
                if(palavra[i]==sub[j]){
                    r++;
                    i++;
                    j++;
                }else{
                    j=0;
                    r=0;
                    i--;
                    break;
                }
            }
        }
    }
    return r==tamanho(sub);
}
//verifica se o caractere eh uma letra
int ehLetra(char l){
    if((l>=65&&l<=90)||(l>=97&&l<=122)){
        return 1;
    }
    return 0;
}
//transforma a string em maiusculas
void upperCase(char texto[5]){
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
//verifica se uma string eh igual a outra
int equals(char p[5],char fim[4]){
    int i=0,r=tamanho(fim);
    while(p[i]==fim[i]&&fim[i]!='\0'){
        i++;
    }
    return r==i;
}
main(){
    char p[21],s[21],o[5];
    do{
    system("cls");
    printf("Digite uma palavra ");
    gets(p);
    printf("Digite outra palavra ");
    gets(s);
    subString(p,s)?printf("Eh substring"):printf("Nao eh substring");
    printf("\n\nDigite FIM para sair ou ENTER para continuar ");
    gets(o);
    upperCase(o);
    }while(!equals(o,"FIM"));
}
