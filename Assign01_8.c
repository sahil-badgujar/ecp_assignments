#include<stdio.h>
int main(void)
{
	int a, b, c;
	int avg;
	printf("Enter three numbers : ");
	scanf("%d %d %d",&a, &b, &c);
	
	avg = (a+b+c)/3;
	printf("Average of three numbers : %d \n",avg);

return 0;
}
