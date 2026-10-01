//From n to 1
#include <stdio.h> 
int main(){
    int n,i=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--){
        printf("%d\n", i);
        }
    return 0;
}