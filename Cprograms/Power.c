#include <stdio.h>
#include <math.h>
int main(){
    long long int power;
    long long int base,exponent;
    printf("Enter Base : ");
    scanf("%lld",&base);
    printf("Enter Exponent : ");
    scanf("%lld",&exponent);
    power=pow(base,exponent);
    printf("%lld raised to the Power of %lld is : %lld \n",base,exponent,power);
    return 0;
}