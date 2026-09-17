#include <stdio.h>
int main (){
	printf("Enter An Integer:");
	int x;
	scanf("%d",&x);
	int y,z;
	y=x*x;
	z=x*x*x;
	printf("The Square of the Number is %d and it's Cube is %d",y,z);
	return 0;
}