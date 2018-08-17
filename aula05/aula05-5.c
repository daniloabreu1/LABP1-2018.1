#include <stdio.h>
#include <math.h>
main(){
    float x, y, z;
    int o;
    printf("DIGITE TRES NUMEROS ");
    scanf("%f %f %f",&x, &y,&z);
    printf("ESCOLHA:\n");
    printf("1 - GEOMETRICA\n");
    printf("2 - PONDERADA\n");
    printf("3 - HARMONICA\n");
    printf("4 - ARITMETICA\n");
    printf("OPCAO >>> ");
    scanf("%d",&o);
    switch(o){
        case 1:
            printf("MEDIA GEOMETRICA %.2f\n",cbrt(x*y*z));
            break;
        case 2:
            printf("MEDIA PONDERADA %.2f\n",(x+2*y+3*z)/6);
            break;
        case 3:
            printf("MEDIA HARMONICA %.2f\n",1/(1/x+1/y+1/z));
            break;
        case 4:
            printf("MEDIA ARITMETICA %.2f\n",(x+y+z)/3);
            break;
        default:
            printf("OPCAO INVALDA\n");
    }
}
