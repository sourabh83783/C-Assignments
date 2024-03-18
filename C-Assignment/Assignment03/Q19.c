#include<stdio.h>
int main()
{

   int n1, n2;

   printf("Enter the number 1: \n");
   scanf("%d",&n1);

   printf("Enter the number 2 : \n");
   scanf("%d",&n2);

   for(int i =1; i <= 10; i++)
   {
     for(int j = n1; j <= n2;j++ )
	 {
       printf("%-3d",j*i);
	 }
	 printf("\n");
   }

}
