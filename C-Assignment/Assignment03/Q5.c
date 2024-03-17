#include<stdio.h>
int main()
{   
    
	int num,temp = 1;

	printf("Enter the number : \n");
	scanf("%d", &num);
    
	int i = num;
	while(i >=1)
	{

        temp = temp * i;
		printf(" %d * ",i);
		i--;

	}
		printf(" =  %d",temp);
    return 0;

}
