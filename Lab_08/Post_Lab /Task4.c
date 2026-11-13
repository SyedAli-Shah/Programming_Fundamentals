#include <stdio.h>
void intro();
void information(int units_consumed,int category,int a,int b);
int calculations(int units_consumed,int category,float bill,float surcharge,float payable_amount,int a,int b);
void results(int units_consumed,int bill,float surcharge,float payable_amount);
int main ()
{
    int units_consumed,category,bill,a,b;
    float surcharge,payable_amount;
    intro();
    information(units_consumed,category,a,b);
    calculations(units_consumed,category,bill,surcharge,payable_amount,a,b);
    results(units_consumed,bill,surcharge,payable_amount);
    return 0;
}
void intro()
{
    printf("Welcome To The Electricity Bill Calulator\n");
}
void information(int units_consumed,int category,int a,int b)
{
    for (int i=0;;)
    {
        printf("Enter The Units You Consumed This Month :");
        scanf("%d",&a);
        if (a>0)
        {
            units_consumed=a;
            break;
        }
        else 
        {
            printf("Invalid Input\n");
        }
    }
    for (int j=0;;)
    {
        printf("Enter Your Customer Category.\n1 for Domestic.\n2 for Comercial.\n");
        scanf("%d",&b);
        if (b==1||b==2)
        {
            category=b;
            break;
        }
        else 
        {
            printf("Invalid Input");
        }
    }
}
int calculations(int units_consumed,int category,float bill,float surcharge,float payable_amount,int a,int b)
{
    if (category==1)
    {
        if (units_consumed<=100)
        {
            bill=units_consumed*15;
        }
        else if (units_consumed>100)
        {
            a = units_consumed-100;
            b=100;
            bill=(b*15)+(a*20);
        }
    }
    else if (category==2)
    {
        bill=units_consumed*25;
    }
    if (bill>5000)
    {
        surcharge=(5/100*bill);
        payable_amount=bill+surcharge;
    }
    else 
    {
        payable_amount=bill;
    }
}
void results(int units_consumed,int bill,float surcharge,float payable_amount)
{
    printf("The Total Units Consumed this Month = %d\n",units_consumed);
    printf("The Total Bill = %d\n",bill);
    printf("Surcharge = %.2f\n",surcharge);
    printf("The Final Payable Amount = %.2f\n",payable_amount);
}