#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter Integer One : ");
    scanf("%d",&x);
    int *a=&x;
    printf("Enter Interger Two : ");
    scanf("%d",&y);
    int *b=&y;
    printf("The SUM of Those Two Integers is %d",(*a)+(*b));
    printf("\nThe PRODUCT of Those Two Integers is %d\n",(*a)*(*b));
}