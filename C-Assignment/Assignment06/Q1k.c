#include<stdio.h>
#include<string.h>
int main()
{
   	char str1[30];

   	char str2[30];

	printf("Enter the string : \n");
	scanf("%s",str1);

	printf("Enter the sub string : \n");
	scanf("%s",str2);

	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	
	int ptr = strncmp(str1,str2,3);

	printf("ptr = %d\n", ptr);
	if(ptr == 0)
		printf("str1 and str2 are equal\n");
	else if(ptr < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is greater than str2\n");

	return 0;
   
}
