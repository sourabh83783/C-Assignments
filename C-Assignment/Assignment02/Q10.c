#include<stdio.h>
int Up(int);
int low(int);
int dgt(int);
int spc(int);
int cmp;
char ch;
int main()
{

	   printf("Enter the Character : \n");
	   scanf("%c",&ch);
       
       cmp = ch;
	  // tabs(ch);        
       Up(cmp);
	  // label:
	  // low(cmp);
	  // dc:
	  // dgt(cmp);

		return 0;

}

       int Up(int cmp)
		   {
              if(cmp >= 65 && cmp <= 90)
			  printf("Entered character %c is an UpperCase character \n",ch);
			  else
			     low(cmp);
			  return 0;
		   }

	   int low(int cmp)
	       {
		      if(cmp >= 97 && cmp <= 122)
			  printf("Entered character %c is an LowerCase character \n",ch);
              else
			     dgt(cmp);
              return 0;
		   }

		int dgt(int cmp)
		   {
		       if(cmp >= 48 && cmp <= 57)
			   printf("Entered character %c is a Digit \n",ch);
			   else
			       spc(cmp);
			   return 0;
		   }

		int spc(int cmp)
		{
		       if(cmp == 32){
			      printf("Entered character %c is a 'Space' \n",ch);
				  }
               else if(cmp == 9){
			      printf("Entered character %c is a 'Tab' \\t \n",ch);
				  }
			   else if(cmp == 13){
			      printf("Entered character %c is a carriage return(\\b) \n",ch);
				  }
			   else if(cmp == 10)
			   {
			      printf("Entered characetr %c is a new line character(\\n)",ch);
               }
         }
