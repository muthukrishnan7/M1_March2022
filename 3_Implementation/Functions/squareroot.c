#include"calculator.h"
void squareroot(){
    double num;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&num);
    double ans = sqrt(num);
    printf("The square root of %lf is %lf",num,ans);
}
