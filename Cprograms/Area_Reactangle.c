#include <stdio.h>
int main(){
    int area,permeter,Length,Breadth;
    printf("Enter the Length of Reactangle: ");
    scanf("%d",&Length);
    printf("Enter the Breadth of Reactangle: ");
    scanf("%d",&Breadth);
    if (Length == 0 || Breadth == 0){
        printf("Length and Breadth should be greater than 0\n");
        return 1;
    }else if (Length > 0 && Breadth > 0){
            area=Length*Breadth;
            permeter=2*(Length+Breadth);
            printf("Area of Rectangle is : %d\n",area);
            printf("Perimeter of Rectangle is : %d\n",permeter);
    }
    return 0;
}