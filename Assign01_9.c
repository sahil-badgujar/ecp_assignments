
	#include<stdio.h>
	int main(void)
	{
	double c , f;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%lf",&f);

	c = ((f-32)*5)/9;
	printf("Conversion of Fahrenheit in Celcius: %lf \n", c);
	return 0;
	}
