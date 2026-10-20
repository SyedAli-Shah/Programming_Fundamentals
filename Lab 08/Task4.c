#include <stdio.h>
int main ()
{
    float results[4][2],tot_m_each[4],tot_mid,tot_fin,avg_mid,avg_fin;
    int i,j;
    for (i=0;i<4;i++)
    {
        printf("Enter Student %d details :\n",i+1);
        for (j=0;j<2;j++)
        {
            if (j==0)
            {
                printf("Enter Mid term Marks = ");
            }
            else if (j==1)
            {
                printf("Enter Final Term Marks = ");
            }
            scanf("%f",&results[i][j]);
            tot_m_each[i]+=results[i][j];
        }
        tot_mid+=results[i][0];
        tot_fin+=results[i][1];
        printf("\n\n");
    }
    float high_mid=results[0][0],high_fin=results[0][1],high_ovr=tot_m_each[0];
    float low_mid=results[0][0],low_fin=results[0][1],low_ovr=tot_m_each[0];
    for (i=0;i<4;i++)
    {
        if (results[i][0]>high_mid)
        {
            high_mid=results[i][0];
        }
        else if (results[i][0]<low_mid)
        {
            low_mid=results[i][0];
        }
        if (results[i][1]>high_fin)
        {
            high_fin=results[i][1];
        }
        else if (results[i][1]<low_fin)
        {
            low_fin=results[i][1];
        }
        if (tot_m_each[i]>high_ovr)
        {
            high_ovr=tot_m_each[i];
        }
        else if (tot_m_each[i]<low_ovr)
        {
            low_ovr=tot_m_each[i];
        }
        avg_mid=tot_mid/4;
        avg_fin=tot_fin/4;
        for(i=0;i<4;i++)
        {
            printf("Total Marks Of Student %d = %.2f\n",i+1,tot_m_each[i]);
        }
    }
        printf("Highest Marks in Mid Term = %.2f\n\n",high_mid);
        printf("Highest Marks in Final Term = %.2f\n\n",high_fin);
        printf("Highest Overall Marks = %.2f\n\n",high_ovr);
        printf("Lowest Marks in Mid Term = %.2f\n\n",low_mid);
        printf("Lowest Marks in Final Term = %.2f\n\n",low_fin);
        printf("Lowest Overall Marks = %.2f\n\n",low_ovr);
        printf("The Average of Mid Marks = %.2f\n\n",avg_mid);
        printf("The Average Marks in Final Term = %.2f\n\n",avg_fin);
       
    }

