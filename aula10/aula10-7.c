#include <stdio.h>
float max(float x, float y, float z){
    if(x>y && x>z){
        return x;
    }else{
        if(y>z){
            return y;
        }else{
            return z;
        }
    }
}
main(){
    float num1, num2, num3;
    printf("Digite tres numero ");
    scanf("%f %f %f",&num1,&num2,&num3);
    printf("O maior numero digitado foi %f",max(num1,num2,num3));
}
