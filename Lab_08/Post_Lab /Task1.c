#include <stdio.h>
int main ()
{
    int attendence[2][3][4]=
    {
        {
            {1,0,1,0},
            {1,1,1,1},
            {0,0,1,1},
        },
        {
            {1,1,1,1},
            {1,1,0,1},
            {1,0,0,0},
        },
    };
    int x=0,y[2][3];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            for (int k=0;k<4;k++)
            {
                if (attendence[i][j][k]==1)
                {
                    x++;
                }
                else 
                {
                    x=x;
                }
            }
            y[i][j]=x;
            printf("Class %d Student %d Total Days Present %d.",i+1,j+1,x);
            x=0;
            printf("\n");
        }
        printf("\n\n");
    }
    int class_total[2]={0,0};
    for (int i=0;i<2;i++)
    {
        printf("Attendance by day in Class %d:\n",i+1);
        for (int k=0;k<4;k++)
        {
            int daily_count=0;
            for (int j=0;j<3;j++)
            {
                if (attendence[i][j][k]==1)
                {
                    daily_count++;
                }
            }
            printf("Day %d: %d students present\n",k+1,daily_count);
            class_total[i]+=daily_count;
        }

        int count=0;
        printf("Students present on all 4 days in Class %d: ",i+1);
        for (int j=0;j<3;j++)
        {
            if (y[i][j]==4)
            {
                if (count>0)
                {
                    printf(", ");
                }
                printf("Student %d",j+1);
                count++;
            }
        }
        if (count==0)
        {
            printf("None");
        }
        printf("\n\n");
    }
    int high_a_cl1=y[0][0],z=1;
    for (int i=0;i<3;i++)
    {
        if (y[0][i]>high_a_cl1)
        {
            high_a_cl1=y[0][i];
            z=i+1;
        }
    }
    int high_a_cl2=y[1][0],w=1;
    for (int i=0;i<3;i++)
    {
        if (y[1][i]>high_a_cl2)
        {
            high_a_cl2=y[1][i];
            w=i+1;
        }
    }
    printf("The Student with Highest Attendence in Class 1 is Student %d.\n",z);
    printf("The Student with Highest Attendence in Class 2 is Student %d.\n",w);
    if (class_total[0]>class_total[1])
    {
        printf("Class 1 has the highest overall attendance.\n");
    }
    else if (class_total[1]>class_total[0])
    {
        printf("Class 2 has the highest overall attendance.\n");
    }
    return 0;
}