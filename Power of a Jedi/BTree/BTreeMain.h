#pragma once
#include <iostream>
#include <utility>
#include "BTree.h"

int BTreeMain()
{
	BTree B(2);
	B.Insert(10);
	B.Insert(20);
	B.Insert(30);
	B.Insert(40);
	B.Insert(5);
	B.Insert(15);
	B.Insert(25);
	B.Insert(35);
	B.Traverse();
	std::pair<BTreeNode*, int> result;
	B.Search(20, result);
	std::cout << result.first->getKey(result.second) << std::endl;
	return 0;
}