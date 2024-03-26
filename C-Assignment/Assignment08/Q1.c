#include<stdio.h>

typedef struct student{
	char name[20];
	int rollnum;
	int marks;
}stud_t;

void stud_info(stud_t *s);
void print_info(stud_t *s);

int main()
{
	stud_t s;

	stud_info(&s);
	print_info(&s);

	return 0;

}

void stud_info(stud_t *s)
{
	printf("Enter the student details (name/rollnum/marks) \n");
	scanf("%s %d %d", s->name,&s->rollnum,&s->marks);
}

void print_info(stud_t *s)
{
	printf("The rollnum of %s is %d and he got %d % \n",s->name,s->rollnum,s->marks);
}
