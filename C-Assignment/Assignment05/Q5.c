#include<stdio.h>
void print_arrr(int arrr[], int len);
void accept_arrr(int arrr[], int len);
int max_arrr(int arr[], int len);
int min_arrr(int arr[], int len);

int main()
{  
   int arrr[5];
   int len;

   accept_arrr(arrr,5);

   printf("Array : ");

   print_arrr(arrr,5);
   printf("\n");

   printf("The max element in the array is %d \n", max_arrr(arrr,5));

   printf("The min element in the array is %d \n",min_arrr(arrr,5));
   return 0;
}

void accept_arrr(int arrr[], int len)
{  
   for(int i = 0; i < len; i++)
   {
    printf("The element of arrays is arr[%d] = \n",i);
	scanf("%d",arrr + i);
   }
}

void print_arrr(int arrr[], int len)
{
    for(int i = 0; i < len; i++)
	{
       printf("%-3d",arrr[i]);
	}
}

int max_arrr(int arr[], int len)
{
  int max = 0;
  for(int i = 0; i < len; i++)
  {   
    if(arr[i] > max)
	     max = arr[i];
  }
  return max;
}

int min_arrr(int arr[], int len)
{  
   int min = arr[0];
   for(int i = 1; i < len; i++)
   {
      if(min > arr[i])
	      min = arr[i];
   }
   return min;
}










