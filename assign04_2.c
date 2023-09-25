
	#include<stdio.h>

	int ppower(int, int);
	int main(void)
	{
	int base, index;
	printf("Enter the Base and Index : ");
	scanf("%d %d", &base, &index);
	printf("%d ^ %d : %d \n", base, index, ppower(base, index));
	return 0;
	}

	int ppower(int base, int index)
	{
		if(index == 1)
			return base;
		else 
			return base * ppower(base, index-1);
	}
