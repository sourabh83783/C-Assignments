#include<stdio.h>
void accept_marks( int arr[],int len);
void print_arr(int arr[],int len);
int total=0;
int main()
{

   int arr[5];
   int len;
   accept_marks(arr,5);
   printf("Array =  ");
   print_arr(arr,5);
   return 0;

}

void accept_marks(int arr[], int len)
{  
 
   for(int i = 0; i <= len-1; i++)
   {
       printf("Enter the array element arr[%d] = : \n",i);
	   scanf("%d",arr + i);

   }
 
}

void print_arr(int arr[],int len)
{
    for(int i = 0; i <= len - 1; i++)
	{
      printf(" %-3d ",arr[i]);
	}
}
