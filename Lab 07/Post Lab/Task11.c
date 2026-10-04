#include <stdio.h>
int main (){
    int units[5],i=0,a=1;
    float tot_amt,bill[5];
    while (i<5)
    {
        printf("\nEnter The Units Consumed By Household %d :",a);
        scanf("%d",&units[i]);
        i++;
        a++;
    }
    i=0,a=1;
    while (i<5)
    {
        if (units[i]>500)
        {bill[i]=(10*units[i]);
        bill[i]=bill[i]+(0.05*bill[i]);}
        else {bill[i]=10*units[i];}
        tot_amt+=bill[i];
        i++;
    }
    printf("\nThe Total Amount Collected is %.2f",tot_amt);
}