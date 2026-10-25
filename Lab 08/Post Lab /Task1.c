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
            {1,1,0,0},
        },
    };
    int x=0;
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
            printf("Student %d was present in %d in class %d.",j+1,x,i+1);
            x=0;
        }
    }
}