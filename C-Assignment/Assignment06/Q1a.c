#include<stdio.h>
#include<string.h>
int strLen(const char* s);
int main()
{
	char str[20] = {" PG-DESD"};
	int length = strlen(str);

	printf("%d \n",strLen(str));
	return 0;
}
int strLen(const char* s)
{
	int len = 0;
	for(int i = 0; s[i] != '\0';i++)
	len++;

	return len;
}
