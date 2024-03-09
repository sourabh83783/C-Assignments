#include<stdio.h>
int main()
{
   int i,j;
   printf("* \n");
   printf("* * \n");
   printf("* * * \n");
   printf("* * * * \n");
   printf("* * * * * \n");

printf("\n");

   for(i=5;i>0;i--)
    {
	 for(j = 5 ; j >= i ; j--)
	{
	 printf("* ");
	}
	printf("\n");
	}


   return 0;

}

