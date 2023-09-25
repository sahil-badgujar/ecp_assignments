#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Table of %d is: \n", num);
	for(int i=1; i<=10; i++)
	{
		printf("\t %d * %d = %d \n",num, i, num*i);
	}
	return 0;
}
