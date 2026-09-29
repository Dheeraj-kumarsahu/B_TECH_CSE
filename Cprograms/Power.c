#include <stdio.h>
#include <math.h>
int main(){
    int power;
    int base,exponent;
    printf("Enter Base : ");
    scanf("%d",&base);
    printf("Enter Exponent : ");
    scanf("%d",&exponent);
    power=pow(base,exponent);
    printf("%d raised to the Power of %d is : %d\n",base,exponent,power);
    return 0;
}