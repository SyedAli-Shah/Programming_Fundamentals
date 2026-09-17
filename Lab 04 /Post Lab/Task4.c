#include <stdio.h>
int main (){
	float x,y;
	printf("Enter Length of Rectangle:");
	scanf("%f",&x);
	printf("Enter Width of Rectangle:");
	scanf("%f",&y);
	float area,perimeter;
	area=x*y;
	perimeter=2*(x+y);
	printf("The Area of Rectangle is %.2f and it's perimeter is %.2f",area,perimeter);
	return 0;
}