#include<stdio.h>
int main()
{
   int Y;

   printf("Enter the Year : \n");
   scanf("%d",&Y);

   if(Y%400==0)
   {
   printf("Entered year %d is Leap year their is 366 days in this year", Y);
   }
   else if(Y % 100 == 0)
   {
      printf("Entered year %d is not Leap year their is 365 days in this year", Y);
   }
   else if(Y%4==0)
   {
	   printf("Entered year %d is Leap year their is 366 days in this year", Y);
   
  }
  else
  {
       printf("Entered year %d is not Leap year their is 365 days in this year", Y);
  }


	return 0;

}
