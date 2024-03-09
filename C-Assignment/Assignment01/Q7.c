#include<stdio.h>
int main()
{
    int num = 9361, a, b, c, d;

    int temp = num;

	 d = num  % 10;
     num = num / 10;
	 
	 c = num % 10;
	 num = num / 10;

	 b = num % 10;
	 num = num / 10;

	 a = num;

	 printf("The Face value of the number is : %d   %d   %d   %d \n", a,b,c,d);

	 printf("9361 = %d + %d + %d + %d \n", a * 1000, b * 100, c * 10, d);

	 printf("The reverse order of the number is : %d%d%d%d \n", d ,c, b, a);
    return 0;
}
