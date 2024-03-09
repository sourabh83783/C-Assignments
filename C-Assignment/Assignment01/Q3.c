#include<stdio.h>
int main()
{  
    char ch;

	printf("Enter the charcter : \n");
	scanf("%c", &ch);

	printf("The ASCII value of this character is : %d \n", ch);
	printf("The Octal value of this character is : %o \n", ch);
	printf("The Hex value of this character is : %x \n", ch);
	printf("The Decimal value of this character is : %d \n", ch);
	printf("The Character value is %c \n", ch);
    return 0;
}
