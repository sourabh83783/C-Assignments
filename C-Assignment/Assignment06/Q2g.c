#include<stdio.h>
#include<string.h>
char *my_strchr(const char* s, int c);

int main()
{

   char str[20] = "PG - DESD";
   char ch;
   char *ptr;

   	printf("Enter character : ");
	scanf("%c", &ch);

	printf("str = %s [ %u ]\n", str, str);

	ptr = my_strchr(str, ch);

	if(ptr == NULL)
		printf("character is not found\n");
	else
	{
		printf("character is found\n");
		printf("ptr = %u\n", ptr);
		printf("*ptr = %c\n", *ptr);
		printf("ptr = %s\n", ptr);
	}

}

char *my_strchr(const char* s, int c)
{

   for(int i=0; s[i] != '\n'; i++)
   {
      if(s[i] == c)
	  return &s[i];
	  else if(s[i] != c)
	  return NULL;
   }

}
