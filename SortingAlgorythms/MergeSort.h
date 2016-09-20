#pragma once
#include "SortingAlgorythm.h"

class MergeSort : public SortingAlgorythm
{
public:
	int Sort(int* serie, const int lenght){

		merge_sort(serie, 0, lenght - 1);
		return 1;
	}

	void merge(int* a, const int start, const int mid, const int end)
	{
		// Variables declaration. 
		int * b = new int[end + 1 - start];
		int h, i, j, k;
		h = start;
		i = 0;
		j = mid + 1;
		// Merges the two array's into b[] until the first half is merged
		while ((h <= mid) && (j <= end))
		{
			if (a[h] <= a[j])
			{
				b[i] = a[h];
				h++;
			}
			else
			{
				b[i] = a[j];
				j++;
			}
			i++;
		}
		// Completes the array filling in it the missing values
		if (h>mid)
		{
			for (k = j; k <= end; k++)
			{
				b[i] = a[k];
				i++;
			}
		}
		else
		{
			for (k = h; k <= mid; k++)
			{
				b[i] = a[k];
				i++;
			}
		}
		// Prints into the original array
		for (k = 0; k <= end - start; k++)
		{
			a[k + start] = b[k];
		}
		delete[] b;
	}

	void merge_sort(int* a, const int start, const int end)
	{
		int mid;
		if (start < end) //  ??
		{
			mid = (start + end) / 2;
			// DIVIDE
			merge_sort(a, start, mid);
			merge_sort(a, mid + 1, end);
			// SORT AND MERGE
			merge(a, start, mid, end);
		}
	}

};

