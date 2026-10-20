#include <stdio.h>
int main ()
{
    int x,y;
    for (x=1;x<6;x++)
    {
        for (y=1;y<=x;y++)
        {
            if (y%2==0)
            {
                printf("0");
            }
            else 
            {
                printf("1");
            }
        }
        printf("\n");
    }
}