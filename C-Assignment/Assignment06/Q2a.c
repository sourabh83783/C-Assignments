#include<stdio.h>
#include<string.h>
int strLen(char *str);
int main()
{
  char str[20];

  printf("Enter the string : \n");
  scanf("%s",str);
  
  int len = strlen(str);

  printf("The length of the string is : %d",len);

  return 0;
}
int strLen(char *str)
{
	int length = 0;
	for(int i = 0; str[i] != '\0';i++)
	length++;
	return length;
}
