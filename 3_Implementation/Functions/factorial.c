#include"calculator.h"
void factorial(){
    int val,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&val);
    factorial=1;
    for(int i=1;i<=val;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",val,factorial);
}
