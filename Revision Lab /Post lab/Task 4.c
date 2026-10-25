#include <stdio.h>
int main (){
    int TC,Cl,Rl;
    float FR,RT;
    printf("Enter The Water Tank Capacity in Liters:");
    scanf("%d",&TC);
    printf("Enter The Current Water Level In Liters:");
    scanf("%d",&Cl);
    printf("Enter Motor Fill Rate In litres per Minute:");
    scanf("%f",&FR);
    if (Cl>=TC)
    {printf("Tank Is Already Full");}
    else {
        RT=(TC-Cl)/FR;
        int min =(int)RT;
        if (RT>min)
        {min += 1;
        float bill=(3.50)*min;
    printf("Your Electricity Bill Cost is  %.2f \n",bill);}
        else {float bill=(3.50)*min;
        printf("Your Electricity Bill Cost is  %.2f \n",bill);}
      printf("The Required Time To Fill The Tank : %.2f",RT);}
  
    
    }



    
