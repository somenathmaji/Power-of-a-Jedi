#pragma once
#include<iostream>
#include "DisjointSet.h"

int DisjointSetMain()
{
	DisjointSet dj(4);
	dj.Union(0, 3);
	dj.Union(1, 2);
	if(dj.Find(0) == dj.Find(1))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;

	if (dj.Find(0) == dj.Find(3))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;

	if (dj.Find(2) == dj.Find(1))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	return 0;
}