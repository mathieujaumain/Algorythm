#pragma once

#include <vector>
#include "Graph.h"

class PathFinder
{
public:
	virtual int FindPath(const Graph &graph, int start, int end, std::vector<Node> &result) = 0;
};

