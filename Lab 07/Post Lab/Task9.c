#include <stdio.h>
int main (){
    int units[5],tot_units,i=0,a=1,high_units,low_units;
    float tot_amt,bill[5];
    while (i<5)
    {
        printf("\nEnter The Units Consumed By Household %d :",a);
        scanf("%d",&units[i]);
        tot_units+=units[i];
        i++;
        a++;
    }
    high_units=units[0];
    low_units=units[0];
    i=0;
    for(;i<5;)
    {
        if (units[i]>units[i-1])
        {high_units=units[i];}
        if (units[i]<units[i-1])
        {low_units=units[i];}
        i++;
    }
    i=0,a=1;
    while (i<5)
    {
        if (units[i]>500)
        {bill[i]=(10*units[i]);
        bill[i]=bill[i]+(0.05*bill[i]);}
        else {bill[i]=10*units[i];}
        tot_amt+=bill[i];
        printf("\nThe Bill of Household %d is %.2f",a,bill[i]);
        i++;
    }

    printf("\nThe Total Units Consumed By 5 Household is %d",tot_units);
    printf("\nThe Highest Units Consumed By A single Household is %d",high_units);
    printf("\nThe Lowest Units Comnsumed By A single Household is %d",low_units);
    printf("\nThe Total Amount Collected is %.2f",tot_amt);
}