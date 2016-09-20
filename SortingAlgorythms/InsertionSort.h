#pragma once
#include "SortingAlgorythm.h"
class InsertionSort :
	public SortingAlgorythm
{
public:
	
	int Sort(int* serie, const int lenght)
	{
		for (int i = 2; i < lenght+1; i++){
			SortIteration(serie, i);
		}

		return 1;
	}

	void SortIteration(int* serie, const int lenght){
		
		if (lenght <= 1) return;
		if (serie[lenght - 1] >= serie[lenght - 2]) return; 
		
		int val2insert = serie[lenght - 1];

		bool isInserted = false;
		for (int i = lenght - 1; i > 0; i--){
			
			serie[i] = serie[i - 1];
			if (serie[i] < val2insert){
				serie[i] = val2insert;
				isInserted = true;
				break;
			}
		}
		if (!isInserted)
			serie[0] = val2insert;

	}

};

