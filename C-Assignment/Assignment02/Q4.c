#include<stdio.h>
int main()
{
   int Num1, Num2;


   printf("Enter the First Number : ");
   scanf("%d",&Num1);

   printf("Enter the Second number : \n");
   scanf("%d",&Num2);

   if(Num1 > Num2)
      printf("Num1 is greater number \n");
	  else
	    printf("Num2 is greater number \n");
   
   return 0;

 }
