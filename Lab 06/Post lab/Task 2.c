#include <stdio.h>
int main (){
    printf("Enter Total Bill Amount:");
    float tba,discount_amount;
    scanf("%f",&tba);
    printf("Enter Your Membership Status.\nIf Your are a Member Enter 1 otherwise 0.\n");
    int ms;
    scanf("%d",&ms);
    if (tba<500)
    {discount_amount=0;}
    else if (tba>=500&&tba<2000)
    { if (ms==1)
        {discount_amount=(0.10)*tba;}
        else if (ms==0)
        {discount_amount=(0.05)*tba;}}
     else if(tba>=2000)
     { if(ms==1)
        {discount_amount=(0.15)*tba;}
        else if (ms==0)
        {discount_amount=(0.08)*tba;}}
     float finbill;
     finbill=tba-discount_amount;
     printf("The Discount Amount is %.2f",discount_amount);
     printf("\nThe Final Payable Amount is %.2f \n",finbill);
     return 0;
}      