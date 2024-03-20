#include<stdio.h>
int que_n(int , char);
int main()
{

     int c;
	 char ch;

	 printf("Enter the number : \n");
	 scanf("%d",&c);

	 printf("Enter the character : \n");
	 scanf("%*c%c",&ch);

	 que_n(c,ch);

	 return 0;

}

int que_n(int c, char ch)
{
     for(int i = 1; i <= c; i++)
	 {
        printf("%c \n", ch);
	 }
	 
}
