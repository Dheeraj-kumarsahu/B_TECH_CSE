#include <stdio.h>
int main(){
    int number1,number2;
    printf("Enter two integers: ");
    printf("Enter first integer: ");
    scanf("%d",&number1);
    printf("Enter second integer: ");
    scanf("%d",&number2);
    if(number1>number2){
        printf("%d is larger than %d\n",number1,number2);
    }else if (number2>number1){
        printf("%d is larger than %d\n",number2,number1);
    }else{printf("Both numbers are equal.\n");
    }
    return 0;
}