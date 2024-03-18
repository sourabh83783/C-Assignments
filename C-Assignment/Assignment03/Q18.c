#include<stdio.h>
int main()
{
   for(int i = 1; i <= 30; i++)
   {
      for(int j = 1; j<= 30; j++)
	  {
         printf("%-4d",j * i);
	  }
	  printf("\n");
   }
}
