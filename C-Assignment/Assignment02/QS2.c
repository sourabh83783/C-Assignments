#include<stdio.h>
#include<math.h>
int main()
{
    
    int n1, n2;
    char choice;

	   printf("Enter the n1 : \n");
	   scanf("%d",&n1);


	   printf("Enter the n2 : \n");
	   scanf("%d",&n2);

       printf("Enter the operation : \n");
       scanf("%*c%c",&choice);

    switch(choice)
	{
	    case '+':
		      if(choice == '+')
			  {
			     printf("The addition of two numbers %d + %d is :%d \n", n1,n2, n1 + n2);
				 }
		break;

		case '-':
		      if(choice == '-')
			  {
			     printf("The substraction of two numbers %d - %d is : %d \n", n1 , n2 , n1 - n2);
				 }
		break;

		case '*':
		      if(choice == '*')
			  {
			     printf("The multiplication of two numbers %d + %d is : %d \n",n1, n2 ,n1 * n2);
				 }
        break;

		case '/':
		       if(choice == '/')
			   {
			     printf("The Division of two numbers %d + %d  is : %d \n", n1, n2, n1 / n2);
               }
		break;

		default:
		      printf("Entered operation is invalid");
	    break;

    }

	return 0;

}
