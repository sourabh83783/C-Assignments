#include<stdio.h>
int main()
{

     int num,rem,Reverse = 0;

	 printf("Enter the number : \n");
	 scanf("%d",&num);

	 int i = 0;
	 while(num != 0)
	 {
     rem = num % 10;
	 Reverse = Reverse * 10 + rem;
	 num /= 10;
	 i++;
	 }

	 printf("The reverse number is : %d \n",Reverse);

	 return 0;

}
