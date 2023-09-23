
#include<stdio.h>

typedef struct stud
	{
		int rollno;
		char name[20];
		int std;
		float marks;
	}stud_t;

void accept_stud(stud_t *);
void print_stud(stud_t *ptr);

int main(void)
{
	stud_t s1;
	accept_stud(&s1);
	print_stud(&s1);

	return 0;
}


void accept_stud(stud_t *ptr)
{
	printf("Enter Students Info: \n");
	printf("Roll No: ");
	scanf("%d",&ptr->rollno);
	printf("Name: ");
	scanf("%s",ptr->name);
	printf("Standard: ");
	scanf("%d",&ptr->std);
	printf("Marks: ");
	scanf("%f",&ptr->marks);

}

void print_stud(stud_t *ptr)
{
	printf("\nStudent Information: \n");
	printf("Roll No: %-4d \t", ptr->rollno);
	printf("Name: %s \t", ptr->name);
	printf("Standard: %d \t",ptr->std);
	printf("Marks: %-6.2f \n", ptr->marks);

}
