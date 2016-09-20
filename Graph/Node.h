#pragma once

#include "Edge.h"
#include <vector>

class Node
{
public:
	Node(int i) :Id(i){}
	~Node(){}

	int getId() { return Id; }

	Edge* getEdge(int i) const { return edges[i]; }

	Edge* getEdgeTo(int to) const 
	{
		auto it = edges.begin();
		while(it < edges.end())
		{
			if ((*it)->To()->getId() == to)
				return *it;
		}
		return nullptr;
	}

private:
	int Id;
	std::vector<Edge*> edges;
};

