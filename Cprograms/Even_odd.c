#include <stdio.h>
int main(){
    long long int num;
    printf("Enter An In teger: ");
    scanf("%lld",&num);
    if (num%2==0){
        printf("%lld is an Even Number",num);
    }
    else{
        printf("%lld is an Odd Number",num);  
    }
    return 0;
}