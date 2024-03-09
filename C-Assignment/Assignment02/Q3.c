#include<stdio.h>
int main()
{

  int Num;

  printf("Enter the number :");
  scanf("%d",&Num);

  if(Num == 0)
    printf("The Entered number is Zero \n");
	else if(Num >= 0)
	   printf("The entered number is Positive \n");
	   else
	      printf("The entered number is Negative \n");
  return 0;

}
