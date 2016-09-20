#pragma once
#include "SequentialSearch.h"
#include "FriendClass.h"

class BinarySearch: public SequentialSearch
{
	friend class FriendClass;

public:
	int Search(int serie[], const int size, const int val);

	int Search(int serie[], const int size, const int val, const int begin, const int end);

private:
	int Five = 5;
};

