#include <stdio.h>
main(){
    int num;
    printf("DIGITE A IDADE DO NADADOR ");
    scanf("%d",&num);
    if(num>=5&&num<=7){
        printf("INFANTIL A\n");
    }else{
        if(num>=8&&num<=10){
            printf("INFANTIL B\n");
        }else{
            if(num>=11&&num<=13){
                    printf("JUVENIL A\n");
            }else{
                if(num>=14&&num<=17){
                    printf("JUVENIL B\n");
                }else{
                    if(num>18){
                        printf("SENIOR\n");
                    }else{
                        printf("IDADE INVALIDA\n");
                    }
                }
            }
        }
    }
}
