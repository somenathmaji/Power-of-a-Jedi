#pragma once
#include "Graph.h"
#include <iostream>

int GraphMain()
{
	Graph G(4, 1);
	G.addEdge(0, 1);
	G.addEdge(0, 2);
	G.addEdge(1, 2);
	G.addEdge(2, 0);
	G.addEdge(2, 3);
	G.addEdge(3, 3);
	G.BFSearch(2);
	return 0;
}