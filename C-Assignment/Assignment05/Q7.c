#include<stdio.h>
void print_arrr(int arrr[], int len);
void accept_arrr(int arrr[], int len);
void bubble_sort(int arrr[], int len);

int main()
{  
   int arrr[5];
   int len;

   accept_arrr(arrr,5);

   printf("Array : ");
   print_arrr(arrr,5);

   bubble_sort(arrr,5);

   printf("Array : ");
   print_arrr(arrr,5);
   printf("\n");

   
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

void bubble_sort(int arr[], int len)
{
   int i,j;
   int temp = 0;
   for(i = 0; i < len; i++)
   {
      for(j = i + 1; j < len;j++)
	  {
        if(arr[i] > arr[j]){
        temp = arr[i];
		arr[i]= arr[j];
		arr[j]=temp;
		}
	  }
   }
}









