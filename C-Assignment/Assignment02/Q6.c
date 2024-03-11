#include<stdio.h>
int rem,rev=0,Num;
int palin(){
    
	while(Num != 0)
	{
	rem = Num % 10;
	rev = (rev * 10) + rem;
	Num = Num /10;
	}
	printf("The reversed number is %d \n", rev);
        
    return rev;
}

int main()
{
     
       printf("Enter the number :");
       scanf("%d",&Num);
	   int  temp  = Num;
       
	   int i = palin();

	   if(temp == i)
	     printf("Entered Number %d  is palindrome \n", rev);
		 else
		   printf("Entered number is not palindrome %d ", rev);

      return 0;

}
