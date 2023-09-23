
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
	printf("Ranges of Data Types: \n");
	printf("Data Type \t\t Size \t Range \n");
	printf("signed char \t\t %d \t %d to %d \n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char \t\t %d \t 0 to %d \n", sizeof(char), UCHAR_MAX);
	printf("short int  \t\t %d \t %d to %d \n", sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("unsigned short int \t %d \t 0 to %d \n", sizeof(unsigned short), USHRT_MAX);
	printf("int \t\t\t %d \t %d to %d \n", sizeof(int), INT_MIN, INT_MAX);
	printf("unsigned int \t\t %d \t 0 to %u \n", sizeof(unsigned int), UINT_MAX);
	printf("long int \t\t %d \t %ld to %ld \n",sizeof(long int), LONG_MIN, LONG_MAX);	
	printf("unsigned long int \t %d \t 0 to %lu \n", sizeof(unsigned long int), ULONG_MAX);
	printf("float \t\t\t %d \t %e to %e \n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("double \t\t\t %d \t %e to %e \n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("long double \t\t %d \t %le to %le \n", sizeof(long double), LDBL_MIN, LDBL_MAX);
	return 0;
}
