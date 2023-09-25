
	#include<stdio.h>

	int fact(int);
	int main(void)
	{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Factorial of %d is : %d \n", num, fact(num));
	return 0;
	}

	int fact(int num)
	{
		if(num == 1)
		return 1;
		else 
		return num * fact(num - 1); 
	}
