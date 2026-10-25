#include <stdio.h>
int main (){
    float total_bill=0,discount,final_bill,x;
    int i;
    do
    {
        printf("\nEnter The Price of an item : ");
        scanf("%f",&x);
        total_bill=total_bill+x;
        printf("\nDo You want To Order Another Item.\n1 for Yes\n0 for No\n");
        scanf("%d",&i);
    }
    while (i!=0);

    if (total_bill>5000)
    {
        discount=0.05*total_bill;
    }
    else 
    {
        discount=0;
    }
    printf("\nThe Total Bill is %.2f",total_bill);
    printf("\nThe Discount is %.2f",discount);
    final_bill=total_bill-discount;
    printf("\nThe Final Bill Is %.2f",final_bill);

}