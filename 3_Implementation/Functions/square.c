#include"calculator.h"
void square(){
    double num;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&num);
    double ans=pow(num,2);
    printf("The square of %lf is %lf",num,ans);
}
