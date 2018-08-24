#include <stdio.h>
#include <windows.h>
main(){
    int h,m,s;
    printf("ACERTE O RELOGIO\n");
    printf("HORA: ");
    scanf("%d",&h);
    printf("MINUTO: ");
    scanf("%d",&m);
    printf("SEGUNDO: ");
    scanf("%d",&s);
    printf("\n%02d:%02d:%02d\n\n",h,m,s);
    system("pause");
    for(;h<24;h++){
            for(;m<60;m++){
                for(;s<60;s++){
                    system("cls");
                    printf("%02d:%02d:%02d\n",h,m,s);
                    Sleep(1000);
                }
                s=0;
            }
            if(h==23&&m==60){
                h=-1;
            }
            m=0;
    }
}
