#include<stdio.h>
int factorial(int a)
{
   int fact = 1;
   for(int i =  a; i >= 1;i--)
   {
      fact = fact * i ;
   }
   return fact;
}
int main()
{
    int a;

	printf("Enter the number : \n");
	scanf("%d",&a);

	int temp = factorial(a);

	printf("The factorial of the number is : %d \n", temp);

    return 0;
}
