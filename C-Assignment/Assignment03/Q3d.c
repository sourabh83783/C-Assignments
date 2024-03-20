#include<stdio.h>
int main()
{
   
   int num,rem = 0,temp = 0,cmp;


  printf("Enter the number : \n");
  scanf("%d",&num);
  cmp = num;
  int add = 0;
  while(num != 0)
  {
     
	 rem = num % 10;
	 num = num / 10;
     temp = rem * rem * rem;
     add = temp + add;
	
  
  }
  if(add == cmp)
  {
     printf("The entered number  %d is an Armstrong Number \n");
  }
  else
  {
     printf("The entered number %d is not Armstrong number \n");
  }

}
