#include<stdio.h>
int main()
{
    int Num1, Num2, result;

	printf("Enter the first Number :");
	scanf("%d",&Num1);

	printf("Enter the second Number :");
	scanf("%d",&Num2);
    
//	result = Num1 / Num2;

	if(Num2 == 0)
	   printf("floating point Exception\n");
       else
	     printf("The Division of two numbers is : %d", Num1 / Num2);
    return 0;
}
