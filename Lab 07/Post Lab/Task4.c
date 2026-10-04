#include <stdio.h>
int main (){
    float total_price=0,discount,final_amount,x;
    int i;
    do
    {
        printf("\nEnter The Price of an item : ");
        scanf("%f",&x);
        total_price=total_price+x;
        printf("\nDo You want To Add Another Item.\n1 for Yes\n0 for No\n");
        scanf("%d",&i);
    }
    while (i!=0);

    if (total_price>10000)
    {
        discount=0.1*total_price;
    }
    else 
    {
        discount=0;
    }
    printf("\nThe Total Price is %.2f",total_price);
    printf("\nThe Discount is %.2f",discount);
    final_amount=total_price-discount;
    printf("\nThe Final Amount Is %.2f",final_amount);

}