// ASCII Value

	#include<stdio.h>
	int main(void)
	{
		char a, b,c,d,e;
		a = '\n';
		b = '\r';
		c = '\t';
		d = '\a';
		e = '\b';

		printf("ASCII values of: \n");
		printf("\t \\n = %d \n", a);
		printf("\t \\r = %d \n", b);
		printf("\t \\t = %d \n", c);
		printf("\t \\a = %d \n", d);
		printf("\t \\b = %d \n", e);
		return 0;
	}
