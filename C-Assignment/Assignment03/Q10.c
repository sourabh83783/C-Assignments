#include<stdio.h>
int main()
{
   int n;

   printf("Enter the Number : \n");
   scanf("%d",&n);

   for(int i = 1; i<= 10; i++)
   {
    int table = i * n;
	printf("The table of number %d is : %d \n",n,table);
   }
 return 0;
}
