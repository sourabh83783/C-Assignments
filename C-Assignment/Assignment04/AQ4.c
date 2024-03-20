#include<stdio.h>
int calcu_lator(int n1, char opr, int n2)
{
 int temp;
 switch(opr)
   {
      case '+':
	          temp = n1 + n2;
	  break;

	  case '-':
	          temp = n1 - n2;
	  break;

	  case '*':
	          temp = n1 * n2;
	  break;

	  case '/':
	          if(n2 == 0)
	          {
                  printf("The Denominator is zerp Invalid Operation! \n");
			  }
			  else
			  {
                 temp = n1 / n2;
			  }
	  break;

	  default:
	         printf("Invalid Operation! \n");
   }

   return temp;
}

int main()
{  
    char ch ;
	int n1,n2,op;
	char opr;
    do
    {

   printf("Enter the n1 : \n");
   scanf("%d", &n1);

   printf("Enter the operation : \n");
   scanf("%*c%c",&opr);


   printf("Enter the n2 : \n");
   scanf("%d", &n2);

    op = calcu_lator(n1,opr,n2);

   printf("Output : %d %c %d = %d \n",n1,opr,n2,op);


	  printf("Do you want to continue(y/n) : %c",ch);
	  scanf("%*c%c",&ch);


    }while(ch != 'n');
   return 0;
}

