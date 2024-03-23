#include<stdio.h>
int linearSearch(int arr[], int len, int key);
int main()
{
    
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);

	int key;

	printf("Enter the key : \n");
	scanf("%d",&key);

	int index = linearSearch(arr,len,key);

	if(index == -1)
	  printf("Key is not found \n");
	  else
	    printf("key is found at index arr[%d]",index);
   
}

int linearSearch(int arr[], int len, int key)
{
   for(int i = 0 ; i < len; i++)
   {
       if(arr[i] == key)
	   return i;
   }
   return -1;
}
