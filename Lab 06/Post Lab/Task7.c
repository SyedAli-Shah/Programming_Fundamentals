#include <stdio.h>
int main (){
    float marks[5],avg_marks,total_marks=0,high_marks,low_marks;
    int i=5,a=1,b=0;;
    while (i!=0)
    {
        printf("Enter the Marks Of Student %d : ",a);
        scanf("%f",&marks[b]);
        a++;
        b++;
        i--;
    }
    i=5,b=0;
    while (i!=0)
    {
        total_marks=total_marks+marks[b];
        b++;
        i--;
    }
    avg_marks=total_marks/5;
    printf("\nThe Total Marks Is : %.2f",total_marks);
    printf("\nThe Average Marks Is : %.2f",avg_marks);
    high_marks=marks[0];
    low_marks=marks[0];
    b=0;
    for (i=0;i<5;i++)
    {
        if (marks[b]>marks[b-1])
        {high_marks=marks[b];}
        if (marks[b]<marks[b-1])
        {low_marks=marks[b];}
        b++;
    }
    printf("\nThe Highest Marks is %.2f",high_marks);
    printf("\nThe Lowest Marks is %.2f",low_marks);

}