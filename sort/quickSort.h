#include <algorithm>
#include <iostream>
void QuickSort(int* left, int* right);

void QuickSort(int* array, int size)
{
	QuickSort(array, array+size-1); 	
}

void QuickSort(int* left, int* right)
{
	if(right-left <= 1)
	{
		return;
	}
	int* end = right;
	swap(*left,*(left+(right-left)/2));
	int* comp = left;
	left++;

	while(left<right)
	{
		while(*left<*comp && left != right) left++;
		while(*right>*comp && left > right) right--;
		if(left<right)
		{
			std::cout << "交换" << std::endl;
			swap(*left, *right);
		}
	}
	swap(*comp, *right);
	QuickSort(comp, right-1);
	QuickSort(right+1, end);
}
