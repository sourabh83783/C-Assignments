#include<stdio.h>
int main()
{

   int i,Num,result;

   printf("Enter the Number : \n");
   scanf("%d",&Num);

   for(i =1 ; i <=10 ; i++)
   {
   result = Num * i;
   printf("The Table of the given number is : %d \n",result);
   }

   return 0;

}
