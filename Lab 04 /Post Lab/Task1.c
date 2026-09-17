#include <stdio.h>
int main(){
	printf("THIS PROGRAM WILL TELL YOU THAT YOU ARE ELIGIBLE FOR SCHOLARSHIP OR NOT\n");
	char name[50];
	printf("Enter Your Name:");
	fgets(name,50,stdin);
	float obt;
	int tm=1100;
	printf("Enter Your Obtained Marks in HSC:");
	scanf(" %f",&obt);
	int FI;
	printf("Enter Your Family income:");
	scanf(" %d",&FI);
	float per;
	per=(obt/tm)*100;
	if (per>=80||FI<=50000)
	{printf("You are Eligible for Scholarship");
	}
	else {printf("You are Not Eligible for Scholarship");
	}
	
	return 0;
}