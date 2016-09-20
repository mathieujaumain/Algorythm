#pragma once
#include "SortingAlgorythm.h"
class SelectSort : public SortingAlgorythm
{
public:
	
	int Sort(int* serie, const int lenght)
	{
		int temp;
		for (int i = 0; i < lenght; i++)
		{
			int in = FindSmallest(serie, i, lenght);
			temp = serie[in];
			serie[in] = serie[i];
			serie[i] = temp;
		}
		return lenght;
	}

	int FindSmallest(int* serie, int start, int lenght)
	{
		int smallest = serie[start];
		int res = start;
		for (int i = start + 1; i < lenght; i++){
			if (serie[i] < smallest)
			{
				res = i;
				smallest = serie[res];
			}
		}
		return res;
	}
};

