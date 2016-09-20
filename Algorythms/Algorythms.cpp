#include <iostream>
#include "SearchAlgorythm.h"
#include "BinarySearch.h"
#include "SequentialSearch.h"

using namespace std;

int sum(int tab[], int size);

int main(int argc, char* argv[])
{
	int suite[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 21, 22, 23, 34, 35, 65, 66, 67 };
	int count = sizeof(suite) / sizeof(*suite);

	for (int i(0); i<count; ++i)
	{
		cout << suite[i] << ", ";
	}
	cout << endl;

	cout << "sum = " << sum(suite, count) << endl;

	int i = 0, val;
	cout << "Enter a value : " ;
	cin >> val;
	cout << endl;
	cout << "Select an algorythm, sequential = 0, binary = 1" << endl;
	int method;
	cin >> method;
	SearchAlgorythm* algo = new SequentialSearch;
	switch (method)
	{
		case 1:
			algo = new BinarySearch;
			break;

		default:break;
	}

	int result = algo->Search(suite, 17, val);
	delete algo;
	if (result >= 0){
		cout << "Value found at " << result << " ." << endl;
	}
	else {
		cout << "Value not found." << endl;
	}

	int valfqsdf;
	cin >> valfqsdf;
	return 0;
}

int sum(int tab[], int size){

	int res(0);
	for (int i(0); i < size; ++i)
		res += tab[i];
	

	return res;
}

