#include"calculator.h"
void tangent(){
    float num,ans;
    printf("Enter the number you want to do trigonometric tangent: ");
    scanf("%f",&num);
     ans=tan(num * 3.14159 / 180);
    printf("The trigonometric tangent val of %f is %f",num,ans);
}
