#include<stdio.h>
int main()
{
   int n,i,result;
   printf("Enter the number : \n");
   scanf("%d",&n);

   for (i = 1; i <= 10; i++)
   {
      result = n * i;
	  printf("The table of the given number is : %d \n",result);

   }
   return 0;

}
