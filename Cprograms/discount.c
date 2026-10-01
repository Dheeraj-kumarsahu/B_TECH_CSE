#include <stdio.h>
int main(){
    float BillAmount;
    printf("ENTER THE BILL AMOUNT: ");
    scanf("%f",&BillAmount);
    if(BillAmount>0 && BillAmount<=5000){
        printf("Discount is 0%% \n");
    }else if (BillAmount>5000 && BillAmount<=7000){
        printf("Discount is 10%% \n");
        printf("Bill Amount after discount: %.2f \n",BillAmount-(BillAmount*0.1));
        }else if (BillAmount>7000 && BillAmount<=10000){
        printf("Discount is 20%% \n");
        printf("Bill Amount after discount: %.2f \n",BillAmount-(BillAmount*0.2));
        }else if (BillAmount>10000){
        printf("Discount is 40%% \n");
        printf("Bill Amount after discount: %.2f \n",BillAmount-(BillAmount*0.4));
        }
        return 0;

    }