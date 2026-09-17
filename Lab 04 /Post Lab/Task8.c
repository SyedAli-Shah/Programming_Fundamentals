#include <stdio.h>
int main(){
	float marks;
	printf("Enter Your Marks:");
	scanf("%f",&marks);
	if (marks>=50)
	{printf("You are Passed");
	}
	else {printf("You are Failed");
	}
	return 0;
}