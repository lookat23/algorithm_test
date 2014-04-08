#include <algorithm>
/*void BubbleSort(int array[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		int bol = true;
		for(int j=1; j<size-i; j++)
		{
			if(array[j]<array[j-1])
			{
				swap(array[j], array[j-1]);
				if(bol) bol = false;
			}
		}
		if(bol) break;
	}
}
*/

void BubbleSort(int array[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		int bol = true;
		for(int j=1; j<size-i; j++)
		{
			if(array[j]<array[j-1])
			{
				swap(array[j], array[j-1]);
				if(bol) bol = false;
			}
		}
		if(bol) break;
	}
}
