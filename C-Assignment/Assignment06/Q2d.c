#include<stdio.h>
#include<string.h>
int *str_cmp(const char *s1, const char *s2);

int main()
{
	char str1[20];
	char str2[20];

	int ptr;

	printf("Enter the string : \n");
	scanf("%s",str1);

	printf("Enter the string : \n");
	scanf("%s",str2);

	ptr = str_cmp(str1,str2);

	if(ptr > 0)
		printf("The str1 is greater than  str2 \n");
	else if(ptr < 0)
		printf("The str1 is less than str 2 \n");
	else
		printf("The Str1 is eqal to str2 \n");
	return 0;
}

int *str_cmp(const char *s1, const char *s2)
{
	for(int i = 0; s1[i] != '\0'; i++)
		if(s1[i] != s2[i])
	return s1[i] - s2[i];
}
