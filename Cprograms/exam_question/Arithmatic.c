#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);

    // Performing arithmetic operations
    int sum = a + b + c;
    int subtraction = a - b - c;
    int product = a * b * c;
    float division = (float)a / (float)b ;

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtraction);
    printf("Product: %d\n", product);
    printf("Division(a&b): %.2f\n", division);
    return 0;
}