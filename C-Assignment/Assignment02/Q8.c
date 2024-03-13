#include<stdio.h>
#include<math.h>
float DicL(float);
float DicS(float);
float tt, qty, disc;
int main()
{

	printf("Enter the quantity :");
	scanf("%f",&qty);
    
	tt = 5 * qty;

    if(qty > 30 && qty <= 50)
	{
	   DicL(tt);
	}
	else if(qty > 50)
	{
	   DicS(tt);
	}
	   
	return 0;

}

   float DicL(float tt)
   {
      disc = tt * 10 /100;
      
      printf("There is a discount of 10 percent for quantities over 30 and you will save upto %f \n", disc);

	  return 0;

   }
	  
   float DicS(float tt)
   {
      disc = tt * 15/100;
      
      printf("There is a discount of 15 percent for quantities over 50 and you will save upto %f \n", disc);

	  return 0;

   }
