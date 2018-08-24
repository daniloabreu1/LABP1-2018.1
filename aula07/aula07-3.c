#include <stdio.h>
main(){
    int min,max,i;
    printf("min: ");
    scanf("%d",&min);
    printf("max: ");
    scanf("%d",&max);
    system("cls");
    if(min>max){
        int a=min;
        min=max;
        max=a;
    }
    for(;min<=max;min++){
        for(i=0;i<=10;i++){
                printf("%02d x %02d = %02d\n",min,i,min*i);
        }
        putchar('\n');
    }
}
