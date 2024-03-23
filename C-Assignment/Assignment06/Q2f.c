#include<stdio.h>
#include<string.h>
char *str_rev(char *s);

int main(void)
{
	char str[] =  "SOURABH";

	printf("str before reverse : %s\n", str);
	
	str_rev(str);

	printf("str after reverse : %s\n", str);


	return 0;
}

char *str_rev(char *s)
{
	int i = 0, j = 0;
	for( ; s[j] != '\0' ; j++ );
	j--;
	for( ; i < j ; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return s;
}
