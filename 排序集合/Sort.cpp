#include <iostream>
#include <stack>
using namespace std;

//选择排序
void SelectSort(int *arr, int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		int index = i;
		for (j = i; j < size ; j++)
		{
			if (arr[index] > arr[j])
			{
				index = j;
			}
		}
		if (index == i)
			continue;
		else
		{
			int tmp = arr[index];
			arr[index] = arr[i];
			arr[i] = tmp;
		}
	}
}

//冒泡排序
void BubbleSort(int *arr, int size)
{
	int i, j, tmp;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

//快排
void QuickSort(int *arr, int left, int right)
{
	if (left >= right)
		return;
	int start = left;
	int end = right;
	int flag = arr[left];
	while (start < end)
	{
		while (start < end && arr[end] >= flag )
		{
			end--;
		}
		if (start < end)
		{
			arr[start] = arr[end];
			start++;
		}
		while (start < end && arr[start] < flag)
		{
			start++;
		}
		if(start<end)
		{
			arr[end] = arr[start];
			end--;
		}
	}

	arr[start] = flag;
	QuickSort(arr, left, start-1);
	QuickSort(arr, start + 1, right);

}

//插入排序
void InsertSort(int * arr, int size)
{
	int i, j;
	for (i =1; i < size; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			int tmp = arr[i];
			for (j = i-1; j >= 0 && tmp < arr[j]; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = tmp;
		}
	}
}

int SeacherN(int *arr, int size, int tar)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mod = (left + right) / 2;
		if (arr[mod] == tar)
		{
			return mod;
		}
		else if (arr[mod] > tar)
		{
			right = mod - 1;
		}
		else
		{
			left = mod + 1;
		}
	}

	return -1;
}