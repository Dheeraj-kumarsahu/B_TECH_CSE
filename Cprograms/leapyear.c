#include <stdio.h>
int main(){
    int Year;
    printf("Enter a year:");
    scanf("%d",&Year);
    if (Year%4==0 && Year%100!=0 || Year%400==0){
        printf("The year %d is a leap year", Year);
    }else{
        printf("The year %d is not a leap year", Year);
    }
    return 0;
}