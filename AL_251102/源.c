#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr1[], int sz1)
{
	int i = 0;
	for (i = 0; i < sz1 - 1; i++)
	{
		int j = 0;
		for(j = 0;j<sz1-i-1;j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int temp = 0;
				temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j + 1] = temp;
			}
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void scanit(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = (sizeof(arr) / sizeof(arr[0]));
	scanit(arr, sz);
	bubble_sort(arr, sz);
	print(arr, sz);
	return 0;
}