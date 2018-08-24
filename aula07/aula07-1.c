#include <stdio.h>
#include <windows.h>
main(){
    int m,s, ms;
    printf("min: ");
    scanf("%d",&m);
    printf("seg: ");
    scanf("%d",&s);
    for(;m>=0;m--){
        for(;s>=0;s--){
            for(ms=59;ms>=0;ms--){
                system("cls");
                printf("%02d:%02d:%02d\n\n",m,s,ms);
                Sleep(1);
            }
        }
        s=59;
    }
}
