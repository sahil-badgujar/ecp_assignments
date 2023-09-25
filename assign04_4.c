
	#include<stdio.h>
	
	int calc(int op1, char opr, int op2);

	int main(void)
	{
	int op1, op2;
	char opr;

	printf("Enter op1 opr op2 : ");
	scanf("%d %c %d", &op1,&opr,&op2);
	
	if(opr == '/' && op2 == 0)
		printf("Number divide by 0 error \n");
	else
		printf("%d %c %d = %d \n", op1, opr, op2, calc(op1, opr, op2));
	
	return 0;
	}

	
	int calc(int op1, char opr, int op2)
	{
		int res;
		switch(opr)
		{
			case '+':
				res = op1 + op2;
			break;

			case '-':
				res = op1 - op2;
			break;

			case '*':
				res = op1 * op2;
			break;

			case '/':
				res = op1 / op2;
			break;
		}
		return res;
	}
