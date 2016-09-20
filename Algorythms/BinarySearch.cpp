#include "BinarySearch.h"

int BinarySearch::Search(int serie[], const int size, const int val)
{
	
	return BinarySearch::Search(serie, size, val, 0, size-1); // degueux
}


int BinarySearch::Search(int serie[], const int size, const int val, const int begin, const int end)
{

	if (serie[begin] > val || serie[end] < val) return -1; // Erreur, serie non ordonnée

	// 
	int middle = (end - begin) / 2 + begin;

	int diff = val - serie[middle];

	if (diff == 0) return middle; // On est pile dessus

	if (diff > 0) return BinarySearch::Search(serie, size, val, middle, end); // on prend la moitié supérieure et on recommence

	if (diff < 0) return BinarySearch::Search(serie, size, val, begin, middle); // on prend la moitié inférieur et on recommence

}