#include <stdio.h>
int main (){
    float LA,Bonus,FinLBalance;
    int NC,WS;
    printf("Enter Load Amount:");
    scanf("%f",&LA);
    printf("Enter Network Code\n1 For Jazz\n2 For Telenor\n3 For Ufone\n");
    scanf("%d",&NC);
    printf("Enter Weekend Status\n1 For Weekend\n2 For Weekdays\n");
    scanf("%d",&WS);
    if (LA<100)
    {Bonus=0;}
    else if ((LA>=100&&LA<500)&&(WS==1)&&(NC!=3))
    {Bonus=(0.10)*LA;}
    else if ((LA>=100&&LA<500)&&(WS==1)&&(NC==3))
    {Bonus=(0.05)*LA;}
    else if ((LA>=500)&&(NC==1||WS==1))
    {Bonus=(0.20)*LA;}
    else if ((LA>=500)&&(NC!=1&&WS!=1))
    {Bonus=(0.12)*LA;}
    printf("The Bonus is %.2f \n",Bonus);
    FinLBalance=LA+Bonus;
    printf("The Final Loaded Amount is %.2f \n",FinLBalance);
}
    






