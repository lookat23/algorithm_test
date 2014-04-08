#include <algorithm>
#include <iostream>
void QuickSort(int* left, int* right);

void QuickSort1(int* array, int size)
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
		while(*left<=*comp && left != right) left++;
		while(*right>*comp && left <= right) right--;
		//cout << *left << ' ' << *right << *comp <<endl;
		if(left<right)
		{
			swap(*left, *right);
		}
	}
	//std::cout << "交换" << std::endl;
	swap(*comp, *right);
	QuickSort(comp, right-1);
	QuickSort(right+1, end);
}
/*
void QuickSort2(int* array, int size)
{
	if(size <= 1)
	{
		return;	
	}
	if(size == 2)
	{
		if(array[0]>array[1])
		{
		swap(array[0], array[1]);
		}
		return;
	}
	int* L = array;
	int* R = array+size-1;
	swap(L[0], L[size/2]);
	int* comp = L;
	L++;
	while(L < R)
	{
		while(*comp>=*L && L != R) ++L;
		while(*comp<*R && L <= R) --R;
		if(L < R)
		{
			swap(*L, *R);
		}
	}
	swap(*comp, *R);
	QuickSort2(array, R-array);
	QuickSort2(R+1, size-(R-array)-1);
}
*/

/*
void QuickSort2(int* array, int size)
{
	if(size <= 1)
	{
		return;
	}
	if(size == 2)
	{
		if(array[0]>array[1])
		{
			swap(array[0], array[1]);
		}
		return;
	}
	int* comp = array;
	swap(*comp, array[size/2]);
	int* L = comp+1;
	int* R = array+size-1;
	while(L<R)
	{
		while(*L<=*comp && L != R) ++L;
		while(*R>*comp && L <= R) --R;
		if(L<R)
		{
			swap(*L, *R);
		}
	}
	swap(*comp, *R);
	QuickSort2(array, R-array);
	QuickSort2(R+1, size-(R-array)-1);
}
*/

void QuickSort2(int* array, int size)
{
	if(size <= 1)
	{
		return;
	}
	if(size == 2)
	{
		if(array[0]>array[1])
		{
			swap(array[0], array[1]);
		}
	}
	int* comp = array;
	swap(*comp, array[size/2]);
	int* L = comp+1;
	int* R = array+size-1;

	while(L<R)
	{
		while(*L<=*comp && L!=R) ++L;
		while(*R>*comp && L<=R) --R;
		if(L<R)
		{
			swap(*L, *R);
		}
	}
	swap(*comp,*R);
	QuickSort2(array,R-array);
	QuickSort2(R+1, size-1-(R-array));
}
