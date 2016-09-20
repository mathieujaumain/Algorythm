#pragma once

#include "Node.h"

class Edge
{
public:
	Edge( Node &_from, Node &_to, int _cost) : cost(_cost){ from = &_from; to = &_to; }
	~Edge();

	Node* From() { return from; }
	Node* To(){ return to; }

private:
		Node* from;
		Node* to;
		int cost;
};

