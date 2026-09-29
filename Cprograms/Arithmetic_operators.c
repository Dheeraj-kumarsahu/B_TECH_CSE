#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Sum: %d\n",a+b);
    printf("Difference: %d\n",a-b);
    printf("Product: %d\n",a*b);
    printf("Quotient(Int Division): %d\n",a/b);
    printf("Quotient(Float Division): %.2f\n",(float)a/(float)b);
    printf("The power of %d raised to %d is: %d\n",a,b,(int)pow(a,b));
    printf("Remainder: %d\n",a%b);
    return 0;
}