#include<stdio.h>
int main()
{
  int n,fact = 1;

  printf("Enter the number : \n");
  scanf("%d",&n);

  for(int i = n; i >= 1; i-- )
  {
     fact = fact * i;
  }

  printf("The factorial of the number %d is : %d\n",n,fact);
}
