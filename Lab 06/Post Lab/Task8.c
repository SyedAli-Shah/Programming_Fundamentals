#include <stdio.h>
int main (){
    int i=0,a=1;
    float org_pri[5],org_tot,discount,fin_amt;
    while (i<5)
    {
        printf("Enter the price of Item %d : ",a);
        scanf("%f",&org_pri[i]);
        a++;
        i++;
    }
    for (i=0;i<5;i++)
    {
        org_tot+=org_pri[i];
    }
    if (org_tot>10000)
    {discount=0.1*org_tot;}
    else {discount=0;}
    fin_amt=org_tot-discount;
    printf("\nThe Orignal Amount is %.2f",org_tot);
    printf("\nThe Discount is %.2f",discount);
    printf("\nThe Final Payable Amount is %.2f",fin_amt);

}