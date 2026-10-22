#include<stdio.h>
int main(){
    int rows;
    int columns;
    printf("Enter the Number of Rows:");
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        for (columns=1;columns<=i;columns++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;   
}