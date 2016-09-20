
#include <iostream>
#include "SelectSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

using namespace std;

void ShowArray(int* arr, int lenght);

int main(int argc, char* argv[])
{
	cout << "Unsorted array : " << endl;
	int arr[] = { 545, 684, 62, 8, 49, 46, 1, 16, 4, 89, 39, 4, 5, 44, 84, 8, 42, 18, 948, 16, 517, 5 };
	ShowArray(arr, sizeof(arr) / sizeof(arr[0]));
	cout << endl;
	cout << "Select the sorting algorythm (0 :select, 1:insertion, 2:merge, 3:quick) :" << endl;
	int al;
	cin >> al;

	SortingAlgorythm* sa;
	switch (al)
	{
		case 0: 
			sa = new SelectSort;
			break;

		case 1 :
			sa = new InsertionSort;
			break;

		case 2: sa = new MergeSort;
			break;

		case 3: sa = new QuickSort;
			break;

		default: sa = new SelectSort; 
			break;
	}

	sa->Sort(arr, sizeof(arr) / sizeof(arr[0]));
	delete sa;
	cout << "Sorted array : " << endl;
	ShowArray(arr, sizeof(arr) / sizeof(arr[0]));
	int i;
	cin >> i;

	return 0;
}

void ShowArray(int* arr, int lenght)
{
	for (int i = 0; i < lenght - 1; i++){
		cout << arr[i] << ", ";
	}
	cout << arr[lenght - 1] << endl;
}