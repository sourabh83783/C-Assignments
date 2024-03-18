#include<stdio.h>
int main()
{
    
	int n;

	printf("Enter the number : \n");
	scanf("%d",&n);

	int i = 1;
	while(i <= n)
	{
        int j = n;
		while(j >= 1)
		{
		if(i * j == n)
		printf("The factors of this number is %d * %d = %d \n",i,j,n);
		j--;
		}
        i++;
 
	}
	return 0;

}
