
#include<stdio.h>

int fib(int num);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Fibonacci Series of %d is : ", num);
	fib(num);

return 0;
}

int fib(int num)
{
	int a = 0, b = 1, c;

	if(num == 0)
		return a;
	
	for(int i = 2; i<=num + 1; i++)
	{  
		printf("%-4d", b);
		c = a + b;
		a = b;
		b = c;
	//	printf("%-4d \n",b);
	}
	printf("\n");
}
