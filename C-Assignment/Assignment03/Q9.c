#include<stdio.h>
int main()
{
   int n1,n2,rem, GCD;

   printf("Enter the number n1 : \n");
   scanf("%d",&n1);
   
   printf("Enter the second number : \n");
   scanf("%d",&n2);

   int num1 = n1;
   int num2 = n2;

   while(n2 != 0)
   {  
      rem = n1 % n2;
	  if(rem == 0)
	  {
        goto here;
	  }
	  else
	  {
	  printf("%d %% %d = %d \n",n1,n2,rem);
      n1 = n2;
      n2 = rem;
	 } 
   }
   
       here:  printf("The Greatest Common factor of  %d and %d is %d \n",num1,num2,n2);
   return 0;

}
