#include<stdio.h>
int main()
{
   int num;
   char ch;

   printf("Enter the number : \n" );
   scanf("%d",&num);

   printf("Enter the character : \n");
   scanf("%c",&ch);

   int i =1;
   while(i <= num)
   {
      printf("*");
	  i++;
   }
    printf("\n");
	return 0;

}
