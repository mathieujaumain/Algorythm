#include "SequentialSearch.h"


int SequentialSearch::Search( int serie[], const int size, const int val)
{
	int i(0);
	bool found = false;
	bool error = false;
	int j;
	while (i < size && !found && !error) // on cherche en traversant la série de 0 à size-1
	{
		i += 1;
		j = serie[i];
		found = val == j;
		error = j > val;
	}

	if (error) return -1;
	if (found) return i;
	
	return -1;
}