
	#include<stdio.h>
	
	int main(void)
	{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int i = 1;
	while(i<11)
	{
		printf("%d * %d = %d \n", num, i, num*i);
		i++;	
	}

/*	for(int i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d \n", num, i, num*i);
	}
*/
	return 0;
	}
