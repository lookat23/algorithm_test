#include <algorithm>
/*
void InsertSort(int* array, int size)
{
	for(int i=1; i<size; i++)
	{
		int pos = i;
		int j = pos-1;
		while(j!=-1 && array[pos] < array[j])
		{
			swap(array[pos], array[j]);
			pos--;
			j--;
		}
	}
}
*/

void InsertSort(int* array, int size)
{
	for(int i=1; i<size; i++)
	{
		int pos=i;
		int j=pos-1;
		while(array[pos]<array[j] && j != -1)
		{
			swap(array[pos], array[j]);
			pos--;
			j--;
		}
	}
}
