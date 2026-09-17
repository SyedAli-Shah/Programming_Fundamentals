#include <stdio.h>
int main(){
	printf("Enter Temperature in Celsius:");
	float C;
	scanf("%f",&C);
	float F;
	F=(C*9/5)+32;
	printf("The Temperture in Fahrenheit is %.2f",F);
	return 0;
}