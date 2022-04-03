#include"calculator.h"
void power(){
    double base;
    double power;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&base,&power);
    double ans=pow(base,power);
    printf("The value  is %lf",ans);
}
