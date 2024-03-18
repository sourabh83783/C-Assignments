#include<stdio.h>
#include<math.h>
int main()
{
    
    int Num;

	printf("Enter the number : \n");
	scanf("%d",&Num);
  
   int 	i =  2;
	while(i <=  Num)
	{  

        if(Num % i == 0)
		{
	      Num = Num / i;
		  printf("%d * ", i);
		 
		}
		else
		{
          i++;
		}  
	}
//	printf("The prime factors of number %d is %d",Num);
	return 0;

}
