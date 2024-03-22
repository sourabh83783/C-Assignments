#include<stdio.h>

int main(void)
{	
	int i, j, rowval;
	printf("\nEnter Row Count: ");
	scanf("%d",&rowval);
	int count = rowval;
	printf("\n------------------------------------------------------\n\n");	
	for(i=0 ; i < rowval ; i++)
	{	
		count--;
		for(int k=0 ; k < count/2 ;k++)
		{
			printf("  ");
		}
		for(j=0 ; j<= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	printf("\n------------------------------------------------------\n");	
	
	return 0;
}
