#include"calculator.h"
void cosine(){
    float num,ans;
    printf("Enter the number you want to do trigonometric cosine: ");
    scanf("%f",&num);
     ans=cos(num * 3.14159 / 180);
    printf("The trigonometric cosine val of %f is %f",num,ans);
}
