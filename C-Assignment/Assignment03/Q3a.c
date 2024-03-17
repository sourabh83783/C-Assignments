#include<stdio.h>
int add(int);
int main()
{
    int num;
    printf("Enter the number : \n");
	scanf("%d",&num);
	 add(num);

	 return 0;

}    int add(int num)
    {
    int a,b,c,d,e;
	d = num %10;
	num /= 10;

	c = num%10;
	num /= 10;

	b = num %10;
	num /= 10;

	a = num;
    int add = d + c + b + a;
    return printf("%d + %d + %d + %d = %d\n",d,c,b,a,add);
}    

