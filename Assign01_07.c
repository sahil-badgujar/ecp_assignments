
	#include<stdio.h>
	int main(void)
	{
//	int num;
//	printf("Enter a 4-digit Number: ");
//	scanf("%d",&num);
	int a,b,c,d,e;
	printf("Enter a Four Digit number ");
	scanf("%d",&a);
	b=a/1000;
	a=a%1000;
	c=a/100;
	a=a%100;
	d=a/10;
	a=a%10;
	e=a;
	printf("Face value of %d is=%d\n",b,b);
	printf("Face value of %d is=%d\n", c,c);
	printf("Face value of %d is=%d\n", d,d);
	printf("Face value of %d is=%d",e,e);
	return 0;
	}
