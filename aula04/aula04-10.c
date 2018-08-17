#include <stdio.h>
main(){
    float h;
    char s;
    printf("DIGITE O M OU F: ");
    s=getchar();
    printf("DIGITE A SUA ALTURA EM METROS: ");
    scanf("%f",&h);
    if(s=='f'||s=='F'){
        printf("PESO IDEAL %.2f\n",(62.1*h)-44.7);
    }else{
        if(s=='m'||s=='M'){
            printf("PESO IDEAL %.2f\n",(72.7*h)-58);
        }else{
            printf("SEXO INVALIDO\n");
        }
    }
}
