#include<stdio.h>
#include<math.h>
int pow_n(int base,int index);
int main()
{
   int base;

   printf("Enter the base : \n");
   scanf("%d",&base);

   int index;

   printf("Enter the index : \n");
   scanf("%d",&index);

   int temp = pow_n(base,index);

   printf("The pow of %d ^ %d is = %d \n", index,base,temp);

   return 0;
}

int pow_n(int base, int index)
{
   int pow = 1;
   
   for(int i = 1; i <= index; i++)
   {
      pow = pow * base;
   }
   return pow;
}
