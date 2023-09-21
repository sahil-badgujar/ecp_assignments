// Area and Perimeter of Triangle:
	#include<math.h>
	#include<stdio.h>

	int main(void)
	{
		double a, b, c;
		printf("Enter three sides of triangle: ");
		scanf("%lf %lf %lf", &a,&b,&c);
		double s = a + b + c;
		printf("Perimeter of triangle is: %.2lf \n", s);
		s = s/2;
		double area = (s*(s-a)*(s-b)*(s-c));
		area = sqrt(area);
		printf("Area of triangle is: %.2lf \n",area);
		return 0;

	}
