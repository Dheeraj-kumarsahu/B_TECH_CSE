#include <stdio.h>
int main(){
    int initial,final,number;
    printf("Enter the Number :- ");
    scanf("%d",&number);
    printf("Enter the NUmber of terms :- ");
    scanf("%d",&final);
    for (initial=1;initial<=final;initial++){
        printf("%d x %d = %d\n",number,initial,number*initial);
    }
    return 0;
}