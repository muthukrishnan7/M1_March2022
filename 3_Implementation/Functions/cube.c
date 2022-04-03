#include"calculator.h"
void cube(){
    double num;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&num);
    double ans=pow(num,3);
    printf("The cube of %lf is %lf",num,ans);
}
