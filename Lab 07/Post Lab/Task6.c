#include <stdio.h>
int main(){
    int counter=3,pin=1234,x;
    for( ;counter>0; )
    {
        printf("\nEnter The Pin : ");
        scanf("%d",&x);
        if (x==pin)
        {
            printf("\nLogin Succesfull");
            break;
        }
        else {
            counter--;
            printf("\nYou Have %d Tries Left",counter);
        }
        while (counter==0)
        {
            printf("\nAccount Locked");
            break;
        }

    }
}