#include<stdio.h>
void accept_arrr( int arr[],int len);
void print_arrr(int arr[],int len);
void reverse_arrr(int arr[], int len);
int main()
{

   int arr[5];
   int len;
   accept_arrr(arr,5);
   reverse_arrr(arr,5);
   printf("Array =  ");
   print_arrr(arr,5);
   return 0;

}

void accept_arrr(int arr[], int len)
{  
 
   for(int i = 0; i < len; i++)
   {
       printf("Enter the array element arr[%d] = : \n",i);
	   scanf("%d",arr + i);

   }
 
}

void print_arrr(int arr[],int len)
{
    for(int i = 0; i < len; i++)
	{
      printf(" %-3d ",arr[i]);
	}
}

void reverse_arrr(int arr[], int len)
{
   int i,j;
   int temp = 0 ;
   for(i = 0, j = len -1;i < j ; i++, j--)
   { 
	  
	    temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

   }
}





