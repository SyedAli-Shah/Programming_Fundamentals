#include <stdio.h>
int main(){
    float temp;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&temp);
    if (temp<15)
    {printf("The Weather is Cold.");}
    else if (temp>=15&&temp<=30)
    {printf("The Weather is Normal.");}
    else {printf("The Weather is Hot.");}
    return 0;
}
