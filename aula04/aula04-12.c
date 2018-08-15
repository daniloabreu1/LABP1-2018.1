#include <stdio.h>
main(){
    int d1,d2, x, y;
    printf("DIGITE AS DIVISAS ");
    scanf("%d %d",&d1, &d2);
    printf("DIGITE AS COORDENADAS ");
    scanf("%d %d",&x,&y);
    if(x==d1 || y==d2){
        printf("DIVISA");
    }else{
        if(x>d1){
            if(y>d2){
                printf("NE");
            }else{
                printf("SE");
            }
        }else{
            if(y>d2){
                printf("NO");
            }else{
                printf("SO");
            }
        }
    }
}
