#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter 1st NUMBER : ");
    scanf("%d",&a);
    printf("Enter 2nd NUMBER : ");
    scanf("%d",&b);
    printf("Enter the 3rd Number: " );
    scanf("%d",&c);
    sum = a + b + c;
    printf("Sum = %d\n",sum);
    float avg = sum/3.0;
    printf("Average = %.2f\n",avg);
    return 0;
}