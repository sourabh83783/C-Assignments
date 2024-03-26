#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	char name[20];
	int rollnum;
	int marks;
}stud_t;

void stud_info(stud_t *s);
void print_info(stud_t *s);

int main()
{
	stud_t *ptr = (stud_t *)malloc(3 * sizeof(stud_t));
    
	for(int i = 0; i < 3; i++)
		stud_info(&ptr[i]);
	for(int j = 0; j < 3; j++)
		print_info(&ptr[j]);
    
	free(ptr);
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
