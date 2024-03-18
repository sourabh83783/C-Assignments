#include<stdio.h>
int main()
{
   
   int n;
   int flag = 0;

   printf("Enter the number : \n");
   scanf("%d",&n);

   for(int i = 2; i <= n/2; i++ )
   {
    
	if (n % i != 0)
	 flag =1;
	 break;
	 }
	 if(flag == 1)
	 {
	   printf("This is the prime number : %d \n",n);
	   }
	 else
	 {
	    printf("This is not prime number \n");
}
   return 0;

}
