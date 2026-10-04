#include <stdio.h>
int main (){
    float x=0,y;
    int i=1,counter=0;
    while (i!=0)
    {
        printf("\nEnter The Recharge Amount : ");
        scanf("%f",&y);
        if (x>=5000)
        {
            printf("\nRecharge Limit Reached");
            i=0;
        }
        else if (y>0&&(!((x+y)>5000)))
        {
            x=x+y;
        }
      
        else if ((x+y)>=5000)
        {
            printf("\nRecharge Limit Reached And The Last recharge Can not Possible.");
        }
        else  {i=0;}
       
        counter++;
    }
    printf("\nThe Total Recharge Amount : %.2f",x);
    printf("\nThe Total Number Of Recharge Attempts : %d",counter);
}