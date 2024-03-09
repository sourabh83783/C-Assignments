#include<stdio.h>
int main()
{
    int n1,n2,n3;

	printf("Enter the First number : \n");
	scanf("%d",&n1);

	printf("Enter the Second number : \n");
	scanf("%d",&n2);

	printf("Enter the Third number : \n");
	scanf("%d", &n3);

	if(n1 > n2)
	  {
	  printf("N1 is greater number \n");
	  }
      if(n2 > n3){
	     printf("N2 is greater number \n");
		 }
	  else if(n3 > n1){
	    printf("N3 is greater number \n");
	  }
	  else
	    printf("All the numbers are equal \n");

    return 0;
}
