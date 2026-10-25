#include <stdio.h>
int main (){
    float prices[5],tot_pri,avg_pri;
    int a=1;
    for (int i=0;i<5;i++)
    {
        printf("\nEnter The Price Of Shoe %d : ",a);
        scanf("%f",&prices[i]);
        tot_pri+=prices[i];
        a++;
    }
    avg_pri=tot_pri/5;
    printf("\nThe Total Prices of 5 Shoes is %.2f",tot_pri);
    printf("\nThe Average Price is %.2f",avg_pri);
}