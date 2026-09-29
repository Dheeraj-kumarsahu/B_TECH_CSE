#include <stdio.h>
int main (){
    int a,b,temp;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Before swapping: a = %d, b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}