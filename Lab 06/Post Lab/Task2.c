#include <stdio.h>
int main (){
    float x,y=0,avg;
    int counter=0,i=1;
    while (i!=0)
    {
        printf("\nEnter The Marks Of Student : ");
        scanf("%f",&x);
        if (x>=0&&x<=100)
        {
            y=y+x;
            counter++;
        }
        else {i=0;}
    }
    avg=(y/counter);
    printf("\nThe Total Number Of Students : %d",counter);
    printf("\nThe Total Marks of Students : %.2f",y);
    printf("\nThe Average Marks Of Students : %.2f",avg);

}