#include"calculator.h"
void sine(){
    float num,ans;
    printf("Enter the number you want to do trigonometric sine: ");
    scanf("%f",&num);
     ans=sin(num * 3.14159 / 180);
    printf("The trigonometric sine val of %f is %f",num,ans);
}
