#include<stdio.h>
#include<string.h>
char *str_cat(char *dest, char *src);
int main()
{
	char str1[20];
	char str2[20];
	char *ptr;

	printf("Enter the string : \n");
	scanf("%s", str1);

	printf("Enter the string : \n");
	scanf("%s",str2);

    ptr = str_cat(str2,str1);

	printf("The concated string is %s \n",ptr);
	return 0;

}

char *str_cat(char *dest, char *src)
{
    int i = 0;
	while(src[i] != '\0')
    i++;
	for(int j = 0; src[j] != '\0' ; j++)
	  dest[i++] = src[j];
	  dest[i] = '\0';
	  return dest;
}
