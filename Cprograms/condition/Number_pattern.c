#include <stdio.h>
int main(){
    int a=1;
    int b=12;
    int c=123;
    int d=1234;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    printf("Second pattern\n");
    printf("%4d\n",a);
    printf("%4d\n",b);
    printf("%4d\n",c);
    printf("%4d\n",d);

    printf("Third pattern\n");
    printf("%04d\n",a);
    printf("%04d\n",b);
    printf("%04d\n",c);
    printf("%04d\n",d);

    int e=-1;
    int f=+12;
    int g=+123;
    int h=-1234;
    printf("Sign Convention \n");
    printf("%+d\n",e);
    printf("%+d\n",f);
    printf("%+d\n",g);
    printf("%+d\n",h);
    return 0;
}