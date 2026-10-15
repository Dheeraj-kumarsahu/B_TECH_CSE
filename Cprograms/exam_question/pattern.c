#include <stdio.h>
int main(){
    int i;
    printf("Enter the number of rows: ");
    scanf("%d",&i);
    for(int row=1;row<=i;row++){
        for(int col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}