#include <stdio.h>
#include <math.h>
int main(){
    float radius,area,circumference,pi=3.14159;
    printf("Enter the radius of Circle: ");
    scanf("%f",&radius);
    if (radius <= 0){
        printf("Radius should be greater than 0\n");
        return 1;
    }else if (radius > 0){
            area=pi*pow(radius,2);
            circumference=2*pi*radius;
            printf("Area of Circle is : %.2f\n",area);
            printf("Circumference of Circle is : %.2f\n",circumference);
}
    return 0;
}