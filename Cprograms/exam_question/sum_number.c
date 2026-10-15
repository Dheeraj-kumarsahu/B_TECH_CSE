#include <stdio.h>
int main(){
    int Number,reminder,sum=0;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d",&Number);
    int original_Number=Number;
    while(Number!=0){
        reminder=Number%10;
        sum=sum+reminder;
        Number=Number/10;
    }
    printf("The sum of the digits is: %d",sum);
    return 0;
}
