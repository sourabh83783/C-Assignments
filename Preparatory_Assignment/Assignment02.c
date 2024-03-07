#include<stdio.h>
   int main()
   {
      int i,n,result=1;
      printf("Enter the number : ");
      scanf("%d",&n);
   
      for(i=1;i<=n;i++)
      {
       result = (result * i);
       
      }

       
       printf("The Factorial of the number is :%d \n",result);

       return 0;
   }
