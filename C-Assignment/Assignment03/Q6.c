#include<stdio.h>
int main()
{
    int num;

	printf("Enter the number : \n");
	scanf("%d",&num);
    printf("all factors :");
	int i = 1;
	while(i < num)
	{
       if(num % i == 0)
	      printf(" %d ,",i);
	   i++;
	}
}
