#include<stdio.h>
int fibonacci_i(int a, int b, int num);
int b1,a1,c = 0;
int main()
{
   int num,a,b,result;

   printf("Enter the number : \n");
   scanf("%d",&num);

   printf("Enter the value of a  : \n");
   scanf("%d",&a);

   int a1 = a;

   printf("Enter the value of b ; \n");
   scanf("%d",&b);

   int b1 = b;

     printf("%d %d",a1,b1);

     result =  fibonacci_i(a,b,num);

   return 0;

}

int fibonacci_i(int a, int b , int num)
{
    for(int i = 0; i <= num; i++)
	{
      c = a + b;
	  a = b;
      b = c;
   
	  printf(" %d ",c);
   
}
// printf("%d",a1);
}
