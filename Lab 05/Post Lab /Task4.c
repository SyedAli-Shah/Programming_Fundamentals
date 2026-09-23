#include <stdio.h>
int main(){
    int restaurantOpen,itemAvailable,balanceSufficient;
    printf("Is the Restaurant Open?\n1 for Yes.\n0 for NO.\n");
    scanf("%d",&restaurantOpen);
    printf("Is the item you want to order available.\n1 for Yes.\n0 for NO.\n");
    scanf("%d",&itemAvailable);
    printf("Your Balance is Sufficient ?\n1 for Yes.\n0 for No.\n");
    scanf("%d",&balanceSufficient);
    if (restaurantOpen==1)
    {if (itemAvailable==1)
    {if (balanceSufficient==1)
    {printf("Order Status:Confirmed\nThe order will reach to your delivery location within 30 min.");}
    else {printf("Order Status:Not Confirmed\nReason:Your Balance Is not Sufficient.");}}
    else {printf("Order Status:Not Confirmed\nReason:The item is not Available.");}}
    else {printf("Order Status:Not Confirmed\nReason:Because the restaurant is closed.");}
    return 0;
}