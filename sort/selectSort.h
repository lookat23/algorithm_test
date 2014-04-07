#include <iostream>

using namespace std;

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
