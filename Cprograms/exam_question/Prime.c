//prime or not 
#include <stdio.h>
int main (){
    int number,initial,count=0;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d",&number);
    for (initial=1;initial<=number;initial++){
        if (number%initial==0){
            count++;
        }
    }
    if (count==2){
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}