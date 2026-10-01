#include <stdio.h>
int main(){
    int i;
    int n;
    char Message[200];
    printf("Enter Number of times to print A message : ");
    scanf("%d", &n);
    printf("Enter the message to print (without Space): ");
    scanf("%s",Message);
    for (i=0;i<=n;i++){
        printf("%s\n",Message); 
    }
    return 0;
}