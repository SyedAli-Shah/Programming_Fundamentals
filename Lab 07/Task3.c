#include <stdio.h>
int main ()
{
    int num1[3][3]=
    {
        {23,21,22},
        {34,76,54},
        {23,12,11},
    };
    int num2 [3][3]=
    {
        {33,12,10},
        {9,78,34},
        {23,44,55},
    };
    int sum[3][3];
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            sum[i][j]=num1[i][j]+num2[i][j];
        }
    }
    printf("The First Matrix is :\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t%d\t",num1[i][j]);
        }
        printf("\n");
    }
    printf("The Second Matrix is :\n");
        for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t%d\t",num2[i][j]);
        }
        printf("\n");
    }
    printf("The SUM Matrix is :\n");
        for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t%d\t",sum[i][j]);
        }
        printf("\n");
    }


}