#include<stdio.h>
int main()
{
   int a = 0;
   int b = 1;
   int c;
   int num;

   printf("Enter the number : \n");
   scanf("%d",&num);
   printf("%d \t",b);
   for(int i = 0; i <= num; i++)
   {
       
	   c  = a + b;

	   a = b;

	   b = c;
    printf("%d \t",c);
   }

 
   
   return 0;

}
