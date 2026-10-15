#include <stdio.h>
int main(){
    int a,number,sum=0;
    printf("Enter a number to find the sum of even numbers up to that number: ");
    scanf("%d",&number);
    for(a=1;a<=number;a++){
        if(a%2==0){
            sum+=a;
        }
    }
    printf("The sum of even numbers up to %d is: %d", number, sum);
    return 0;
}