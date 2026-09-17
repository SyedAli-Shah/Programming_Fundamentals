#include <stdio.h>
int main(){
	char name[50];
	printf("Enter Your Full Name:");
	fgets(name,50,stdin);
	name[strcspn(name, "\n")] = '\0';
	char grade;
	printf("Enter Your Grade:");
	grade=getchar();
	printf("%s considering you got %c grade in Hsc, we would be happy to provide you scholarship",name,grade);
	
	
}