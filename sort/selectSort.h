#include <iostream>

using namespace std;
/*
void SelectSort(int* array, int size)
{
	for(int i=0; i<size; i++)
	{
		int* min = array+i;
		for(int j=i+1; j<size; j++)
		{
			if(array[j]<*min)
			{
				min = array+j;
			}
		}
		if(min != array+i)
		{
			swap(*min, array[i]);	
		}
	}
}
*/

void SelectSort(int* array, int size)
{
	for(int i=0; i<size-1; i++)
	{
		int min = i;
		for(int j=i+1; j<size; j++)
		{
			if(array[j]<array[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			swap(array[min], array[i]);
		}
	}
}
