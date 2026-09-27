#include <stdio.h>
int main(){
    float distance,fare,finfare;
    int hour,x;
    printf("Enter Distance in Km:");
    scanf("%f",&distance);
    printf("Enter the Hour Of The Day:");
    scanf("%d",&hour);
    if(distance<0)
    {printf("Invalid Input");}
    else if (distance>0)
    { x=distance-1;
     fare=(22*x)+50;}
     else if (distance=0)
     {fare=0;}
     if (distance>0)
     {if(hour<6)
     {finfare=fare+40;}
     else if(hour>22)
     {finfare=fare+40;}
     else {finfare=fare;}}
     else {finfare=0;}
     printf("Your Fare is Rs:%.2f",finfare);
     return 0;
    }




