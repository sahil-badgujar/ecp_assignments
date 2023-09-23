
#include<stdio.h>

typedef struct stud
	{
		int rollno;
		char name[20];
		float marks;
	}stud_t;

int main(void)
{
	stud_t s1;

	printf("Enter Students Info: \n");
	printf("Roll No: ");
	scanf("%d",&s1.rollno);
	printf("Name: ");
	scanf("%s",s1.name);
	printf("Marks: ");
	scanf("%f",&s1.marks);

	printf("\nStudent Information: \n");
	printf("Roll No: %-4d \t", s1.rollno);
	printf("Name: %s \t", s1.name);
	printf("Marks: %-6.2f \n", s1.marks);
	
	return 0;
}
