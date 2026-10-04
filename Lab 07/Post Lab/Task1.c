#include <stdio.h>
int main (){
    float x=50000.0,y,a=0;
    int i=1,counter=0;
    while(i!=0)
    {
        printf("\nEnter the Amount You Want To withdraw from Your Account : ");
        scanf("%f",&y);
        if (y>=0&&y<=x)
        {
            x=x-y;
            a=a+y;
            counter++;
        }
        else if (y>x)
        {printf("\nYou Don't Have Enough Balance.");}
        if (y<0||x==0)
        {
            i=0;
        }

    }
    printf("\nThe Remaining Balance is Rs:%.2f",x);
    printf("\nThe Number Of Succesfull Withdrawals : %d",counter);
}