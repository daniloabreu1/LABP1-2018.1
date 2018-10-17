//questao 03
#include <stdio.h>
char *imprimeEstadoCivil(int cod){
    switch(cod){
        case 1:
            return "solteiro";
        case 2:
            return "casado";

        case 3:
            return "divorciado";

        case 4:
            return "viuvo";
    }
    return NULL;
}
main(){
    int o;
    printf("digite a opcao ");
    scanf("%d",&o);
    puts(imprimeEstadoCivil(o));
}
