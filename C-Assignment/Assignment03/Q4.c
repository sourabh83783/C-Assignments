#include<stdio.h>
int main()
{   
    
	int num,temp = 1;

	printf("Enter the number : \n");
	scanf("%d", &num);
    
	int i = 1;
	while(i <= num)
	{

        temp = temp * i;
		printf(" %d * ",i);
		i++;

	}
		printf(" =  %d",temp);
    return 0;

}
