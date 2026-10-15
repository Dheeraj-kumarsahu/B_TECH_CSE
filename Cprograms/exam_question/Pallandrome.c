#include <stdio.h>
int main(){
    int number;
    int copy_number=number;
    int reverse=0;
    printf("Enter a number to check if it is a palindrome or not: ");
    scanf("%d", &number);
    copy_number=number;
    while(copy_number!=0){
        int reminder=copy_number%10;
        reverse=reverse *10+reminder;
        copy_number=copy_number/10;
    }
    if (reverse==number){
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    return 0;
}