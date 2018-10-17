//questao 04
#include <stdio.h>

main(){
    int a,*b,**c,***d;
    a=3;
    b=&a;
    c=&b;
    d=&c;
    printf("numero: %d\nDobro: %d\n",a,(*b)*2);
    printf("triplo: %d\nQuadruplo: %d\n\n",(**c)*3,(***d)*4);
}
