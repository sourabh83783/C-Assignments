#include<stdio.h>
#include<string.h>
char *str_cmp(const char *s1, const char *s2);
int main()
{
	char str1[20];
	char str2[20];

	printf("Enter the string : \n");
	scanf("%s",str1);

	printf("Enter the string : \n");
	scanf("%s",str2);

	int cmp = str_cmp(str1,str2);

		if(cmp < 0)
			printf("The string 1 is less than string 2 \n");
		else if(cmp > 0)
			printf("The string 1 is greater than string 2\n");
		else
			printf("The strings are equal\n");

	return 0;
}

char *str_cmp(const char *s1, const char *s2)
{
	for(int i = 0; s1[i] != '\0'; i++)
		if(s1[i] != s2[i])
		return s1[i]-s2[i];
}
