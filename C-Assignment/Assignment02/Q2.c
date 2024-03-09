#include<stdio.h>
int main()
{
   int Num;

   printf("Enter the number :");
   scanf("%d",&Num);

   if(Num % 2 == 0)
      printf("The Entered number %d is 'Even' \n", Num);
	  else
	    printf("The Entered number %d is 'Odd \n", Num);

   return 0;

}
