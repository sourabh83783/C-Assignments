#include<stdio.h>
int main()
{
   float Cel, f, c, C;

   printf("Enter the Temperature in Far : \n");
   scanf("%f",&f);

   c = 5.0 / 9.0 * (f - 32.0);

   printf("The conversion far to Cel is : %f \n", c);
   
   printf("Enter the Temp in Cel : \n");
   scanf("%f", &C);

   f = (9.0/5.0 * C ) + 32.20;

   printf("The conversion of Temp in Far : %f \n", f);
   return 0;

 }

