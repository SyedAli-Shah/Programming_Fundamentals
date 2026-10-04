#include <stdio.h>
int main (){
    float prices[5],tot_pri,high_pri,low_pri,avg_pri;
    int a=1;
    for (int i=0;i<5;i++)
    {
        printf("\nEnter The Price Of Shoe %d : ",a);
        scanf("%f",&prices[i]);
        tot_pri+=prices[i];
        a++;
    }
    avg_pri=tot_pri/5;
    high_pri=prices[0];
    low_pri=prices[0];
    for(int i=0;i<5;i++)
    {
        if (prices[i]>high_pri)
        {high_pri=prices[i];}
        if (prices[i]<low_pri)
        {low_pri=prices[i];}
    }
    printf("\nThe Total Prices of 5 Shoes is %.2f",tot_pri);
    printf("\nThe Average Price is %.2f",avg_pri);
    printf("\nThe Highest Price is %.2f",high_pri);
    printf("\nThe Lowest Price is %.2f",low_pri);
}