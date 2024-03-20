#include<stdio.h>
int main()
{
     char choice, opr;
     int n1,n2,result;

	 do
	 {  
	     printf("Enter the first number : \n");
		 scanf("%d", &n1);

		 printf("Enter the Operation : \n");
		 scanf("%*c%c", &opr);

		 printf("Enter the second number : \n");
		 scanf("%d", &n2);

		 switch(opr)
		 {
             case '+':
			         result = n1 + n2;
			         break;

			 case '-':
			         result = n1-n2;
			         break;

		     case '*':
			         result = n1 * n2;
			         break;

			 case '/':
			         if(n2 == 0)
					 {
                         printf("Denominator is Zero...!");
					 }
                     else
					 {
                         result = n1 / n2;
					 }
			         break;

			 default:
			         printf("Invalid Operation...!");
			         break;

		 }
		  
		 
		 printf("The result of %d %c %d is %d \n", n1, opr, n2, result);

     
         printf("Do you want to continue( y / n) : \n");
		 scanf("%*c%c",&choice);
	 }while(choice != 'n');

	 return 0;
}
