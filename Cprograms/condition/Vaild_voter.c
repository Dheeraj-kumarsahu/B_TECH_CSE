#include <stdio.h>
int main(){
    char Name[100];
    int age;
    printf("Enter your name: ");
    scanf("%s", Name);
    printf("Hello %s! Please Enter your age:- ", Name);
    scanf("%d", &age);
    if (age>=18){
        printf("You Are Eligiblie For Voting %s\n",Name);
    }else{
        printf("You Are Not Eligiblie For Voting %s\n",Name);
        printf("You Can Vote After %d Years\n",18-age);
    }
    return 0;
}