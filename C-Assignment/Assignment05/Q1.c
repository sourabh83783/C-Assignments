#include<stdio.h>
int accept_marks( int arr[],int len);
 //int arr_len(int len);
int total=0;
int main()
{

   int arr[5];
   int len;
   int average = 0;
   accept_marks(arr,5);

   average = total / 5;

   printf("The average marks of the 5 subject is %d",average);
   return 0;

}

int accept_marks(int arr[], int len)
{  
 
   for(int i = 0; i <= len-1; i++)
   {
       printf("Enter the array element arr[%d] = : \n",i);
	   scanf("%d",arr + i);

	   total = total + arr[i];
   }

   return total;
 
}
