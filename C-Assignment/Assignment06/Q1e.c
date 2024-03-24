#include<stdio.h>
#include<string.h>
/*int main()
{
   	char str1[30];

   	char str2[30];

	printf("Enter the string : \n");
	scanf("%s",str1);

	printf("Enter the sub string : \n");
	scanf("%s",str2);

	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	
	int ptr = stricmp(str1,str2);

	printf("ptr = %d\n", ptr);
	if(ptr == 0)
		printf("str1 and str2 are equal\n");
	else if(ptr < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is greater than str2\n");

	return 0;
   
}*/
int main( )
{
   char str1[] = "abc" ;
   char str2[] = "ABC" ;

   int j = strcmpi ( str1, str2 ) ;

   printf ( "The function returns = %d",j ) ;
   return 0;
}
