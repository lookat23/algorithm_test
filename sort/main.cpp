
#include "selectSort.h"
#include "bubbleSort.h"
#include "insertSort.h"
#include "quickSort.h"
#include <iostream>

using namespace std;

void print(int array[], int size)
{
	if(size==0)
	{
		return;
	}
	cout << array[1];
	for(int i=1; i<size; i++)
	{
		cout << ',' << array[i];
	}
	cout << endl;
}

int main()
{
	const int test_num = 10;
	int arr[test_num];
	for(int i=0; i< test_num; i++)
	{
		arr[i] = rand()%test_num;
	}
	print(arr, test_num);
	void (*Sort)(int*, int) = QuickSort; 
	//SelectSort(arr, test_num);
	//BubbleSort(arr, test_num);
	Sort(arr, test_num);
	print(arr, test_num);

}

