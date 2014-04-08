
#include "selectSort.h"
#include "bubbleSort.h"
#include "insertSort.h"
#include "quickSort.h"
#include <iostream>
#include <vector>

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
	const int test_num = 100;
	int arr[test_num];
	for(int i=0; i< test_num; i++)
	{
		arr[i] = rand()%test_num;
	}
	print(arr, test_num);
	//检查排序是否正确
	vector<int> vec(arr,arr+test_num);
	sort(vec.begin(), vec.end());
////////////////////////////////////////////////////////////	
	void (*Sort)(int*, int) = QuickSort2; 
	//SelectSort(arr, test_num);
	//BubbleSort(arr, test_num);
	Sort(arr, test_num);
	print(arr, test_num);
	int bol = true;
	for(int i=0; i<test_num; i++)
	{
		if(vec[i] != arr[i])
		{
			bol = false;
			break;
		}
	}
	cout << (bol?"排序正确":"排序不正确") << endl;

}

