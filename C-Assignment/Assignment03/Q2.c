#include<stdio.h>
int main()
{
    int num, table;

	printf("Enter the number : \n");
	scanf("%d",&num);

	int i = 1;
	while(i <=10)
	{
	   table = num * i;
	   printf("9 x %d : %d \n",i,table);
	   i++;
	}
    
	return 0;

}
