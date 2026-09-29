#include <stdio.h>
int main (){
    long long int A;
    long long int B;
    printf("Enter The First Number : ");
    scanf("%lld",&A);
    printf("Enter the second Number : ");
    scanf("%lld",&B);
    if(A==B){
        printf("Both numbers are equal.\n");
    }
    else if(A>B){
        printf("The first number is greater than the second number.\n");
    }
    else{
        printf("The first number is less than the second number.\n");
    }
    return 0;
}