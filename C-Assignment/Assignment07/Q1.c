#include<stdio.h>
void accept_array(int arr[][3]);
void print_array(int arr[][3]);
int main()
{  
	int arr[3][3];

	accept_array(arr);
	print_array(arr);


	return 0;
}

void accept_array(int arr[][3])
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("Enter the Array Elements arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void print_array(int arr[][3])
{
	printf("First 2D array: \n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%-4d",arr[i][j]);
		}
		printf("\n");
	}
}
