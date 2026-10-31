#include <stdio.h>
int main() 
{
    int a=10,b=20;
    int *x=&a,*y=&b;
    printf("The Variable a Address is [%p] and b Address is [%p].",x,y);
    printf("\nThe Value of a is %d and b is %d.",*x,*y);
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nThe Value Swaping of a is %d and b is %d.",*x,*y);
}
