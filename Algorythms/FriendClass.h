#pragma once
#include "BinarySearch.h"
class FriendClass
{
public:
	int ReturnFive(BinarySearch* search)const { return search->Five; /* possible uniquement car BinarySearch est une class ami*/ }

	
};

