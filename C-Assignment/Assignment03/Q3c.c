#include<stdio.h>
int main()
{

      int num,rem,temp,Reverse =0;

	  printf("Enter trhe number : \n");
	  scanf("%d",&num);
      
	  temp = num;

	  int i = 0;
	  while(num != 0)
	  {

        rem = num % 10;
		Reverse = Reverse * 10 +rem;
		num = num / 10;

	  }

	  printf("Reversed number is : %d \n",Reverse);

	  if(Reverse == temp)
	  {
	     printf("The entered number %d is Pallindrome \n",temp);
		 }
      else
	  {
	     printf("The enterd number %d is not pallindorme \n", temp);
		 }

      return 0;

}
