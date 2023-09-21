
// Pattern using multiple printf
	#include<stdio.h>
	int main(void)
	{
		char a = '*';

		printf("%c \n", a);
		printf("%c%c \n", a,a);
		printf("%c%c%c \n",a,a,a);
		printf("%c%c%c%c \n",a,a,a,a);
		printf("%c%c%c%c%c \n", a,a,a,a,a);
		return 0;
	}


/*
// Pattern using single printf	

	#include<stdio.h>
	
	int main(void)
	{
		int a = 5;

		for(int i=0; i<a; i++)
		{
			for(int j=0; j<=i; j++)
			printf("*");
		
		printf("\n");
		}
		return 0;
	}

*/
