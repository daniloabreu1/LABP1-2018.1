#include <stdio.h>
#include <string.h>
void tel(char n[31]){
     int i=0;
        while(n[i]!='\0') {
            if(n[i]=='-') {
                printf("%c",n[i]);
                i++;
            } else {
                switch(n[i]) {
                case '1':
                    printf("1");
                    break;
                case '0':
                    printf("0");
                    break;
                case 'A':
                case 'B':
                case 'C':
                    printf("2");
                    break;
                case 'D':
                case 'E':
                case 'F':
                    printf("3");
                    break;
                case 'G':
                case 'H':
                case 'I':
                    printf("4");
                    break;
                case 'J':
                case 'K':
                case 'L':
                    printf("5");
                    break;
                case 'M':
                case 'N':
                case 'O':
                    printf("6");
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    printf("7");
                    break;
                case 'T':
                case 'U':
                case 'V':
                    printf("8");
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    printf("9");
                    break;
                }
                i++;
            }
        }
        putchar('\n');
}
main() {
    char n[31];
    gets(n);
    strupr(n);
    tel(n);
}
