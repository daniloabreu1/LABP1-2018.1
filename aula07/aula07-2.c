#include <stdio.h>
#include <windows.h>
#include <conio.h>
main(){
    int h,m,s;
    char c=20;
    printf("ACERTE O RELOGIO\n");
    printf("HORA: ");
    scanf("%d",&h);
    printf("MINUTO: ");
    scanf("%d",&m);
    printf("SEGUNDO: ");
    scanf("%d",&s);
    printf("\n%02d:%02d:%02d\n\n",h,m,s);
    system("pause");
    for(;h<24&&c!=27;h++){
            for(;m<60&&c!=27;m++){
                for(;s<60;s++){
                    system("cls");
                    printf("%02dh:%02dm:%02ds\n",h,m,s);
                    Sleep(1000);
                    if(kbhit()){
                        c=getch();
                        if(c==27){
                            break;
                        }
                    }
                }
                s=0;
            }
            if(h==23&&m==60){
                h=-1;
            }
            m=0;
    }
}
