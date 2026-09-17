#include <stdio.h>
int main(){
	float x,y,z,avg;
	printf("This Program will Calculate the Average of 3 Numbers.\n");
	printf("Enter first Number:");
	scanf("%f",&x);
	printf("Enter second Number:");
	scanf("%f",&y);
	printf("Enter third Number:");
	scanf("%f",&z);
	avg=(x+y+z)/3;
	printf("The Average of Those 3 Numbers is %.2f",avg);
	return 0;
}