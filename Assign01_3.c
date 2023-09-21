	
	#include<stdio.h>
	int main(void)
	{
		char ch;
		int i;
		printf("Enter the character : ");
		scanf("%c",&ch);

		printf("ASCII Value of given character in Decimal : %d \n",ch);
		printf("ASCII Value of given character in Octal : %o \n",ch);
		printf("ASCII Value of given character in Hexadecimal : %x \n",ch);
		
		printf("Enter an ASCII value : ");
		scanf("%d",&i);
		printf("Given ASCII value in Character : %c \n",i);

	return 0;
	}

