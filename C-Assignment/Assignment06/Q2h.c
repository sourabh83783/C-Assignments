#include<stdio.h>
#include<string.h>
char *str_str(const char *str, const char *sstr);
int main()
{
	char str[] = {"I am Student of DESD cource"};
	char sstr[] = {"am"};

	char *ptr = strstr(str, sstr);

	printf("str = %u\n", str);

	printf("ptr = %u\n", ptr);
	printf("ptr = %s\n", ptr);
	return 0;
}
char *str_str(const char *str, const char *sstr)
{
	for(int i = 0; str[i] != '\0';i++)
	{
	    int len = strlen(sstr);
		if(str[i] == sstr[i])
		{
			if(! strncmp(str + i , sstr,len))
				return str + i;
		}
	}
	return NULL;
}
