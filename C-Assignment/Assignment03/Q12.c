#include<stdio.h>
int main()
{
    int base,index;

	printf("Enter the Base: \n");
	scanf("%d",&base);

	printf("Enter the Index : \n");
	scanf("%d",&index);
     int pow = 1;
	for(int i;i < index; i++ )
	{
 
        pow = base * pow;

	}
	printf("The power of the given number is %d \n",pow);
    return 0;
}
