#pragma once

#include <vector>
#include "Edge.h"
#include "Node.h"

class Graph
{
public:
	Graph();
	~Graph();

	void AddNode(int id);
	void AddEdge(int from, int to, int cost);

	int FindPath(const Node & from, const Node & to, int method, std::vector<Node> &path);

private:
	std::vector<Node> nodes;
	std::vector<Edge> edges;
};

