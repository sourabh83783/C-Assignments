#include<stdio.h>
#include<string.h>
char *str_cpy(char *dest, char *src);
int main()
{
	char str1[20];
	char str2[20];

	printf("Enter the string : \n");
	scanf("%s",str1);
   
    str2[20] = str_cpy(str2,str1);

	printf("str1 = %s \n",str1);
	printf("str2 = %s \n",str2);
  
	return 0;
}

char *str_cpy(char *dest, char *src)
{   int i;
	for( i = 0; src[i] != '\0';i++)
		dest[i] = src[i];
		dest[i] = '\0';
		return dest;
	
}
