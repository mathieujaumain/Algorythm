#pragma once
#include "SortingAlgorythm.h"

class QuickSort :
	public SortingAlgorythm
{
public:
	int Sort(int* serie, const int lenght){
		return Sort(serie, 0, lenght);
	}

	int Sort(int* serie, const int start, const int end){
		int res = partition(serie, start, end);

		// On sort les partion ainsi crée
		if (start != res) // = on verifie si on est pas en train de sort une partition à un unique element
		Sort(serie, start, res);

		if (res+1 != end) // = on verifie si on est pas en train de sort une partition à un unique element
		Sort(serie, res + 1, end);
		
		return 1;
	}

	int partition(int* serie, const int start, const int end){

		int x = serie[start]; //pivot (au pif, il n'a pas d'importance)
		int i = start;
		int temp;
		int j;

		for (j = start + 1; j<end; j++)
		{
			if (serie[j] <= x) // si serie[j] < x  => mettre serie[j] à gauche (on s'en tape de l'ordre)
			{
				i += 1;
				temp = serie[j];
				serie[j] = serie[i];
				serie[i] = temp;
			}
		}

		// enfin on place le pivot (serie[start])  à la position i pour finir la partition
		temp = serie[start];
		serie[start] = serie[i];
		serie[i] = temp;

		return i;// return position of the pivot
	}
};

