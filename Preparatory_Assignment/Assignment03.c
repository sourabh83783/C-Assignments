#include<stdio.h>
int main()
{
int x,y,z;
int i,n;
x = 0;
y =1;

printf("The no is :");



scanf("%d",&n);

 printf("%d",x) ;

 printf(" \t \n");

 printf("%d \t \n",y);




for(i=1;i<=n;i++){

z = x+y;

printf("%d",z);

printf("\t \n");

x=y;
y=z;




}



}
