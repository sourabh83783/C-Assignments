#include<stdio.h>
#include<string.h>
char *str_cpy(char *dest,const char *src);

int main()
{
	char str1[20];
	char str2[20];

	char *ptr;

	printf("Enter the string : \n");
	scanf("%s",str1);

	ptr = str_cpy(str2,str1);

	printf("The string at str 1 is : %s \n",str1);

	printf("The string at str2 2 is %s \n",str2);
	return 0;
}

char *str_cpy(char *dest, const char *src)
{
	int i ;
	for(i = 0; src[i] != '\0';i++)
			dest[i] = src[i];
			dest[i] = '\0';
			return dest;

}
