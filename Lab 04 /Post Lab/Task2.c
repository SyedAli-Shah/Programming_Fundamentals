#include <stdio.h>
int main(){
	printf("This program will tell you if you will get fined by library or not, if fined then how much");
	int LD;
	printf("\nEnter Late Days:");
	scanf("%d",&LD);
	if (LD>=1)
	{if (LD<=5)
	{printf("Fine Rs=50");
	}else if (LD<=10)
	{printf("Fine Rs=100");
	}else {printf("Fine Rs=200");
	}
	}else {printf("No Fine");
	}
	
    return 0;
}