#pragma once
#include "node.h"
#include <iostream>

class mlist {
public:
	void add(int value);
	bool isEmpty();
	bool value_exists(int value);

	int& operator[](int value);
	node* index_search(int value);

	//char* print_list();

	mlist();
	~mlist();

private:
	node* start;
	int size = 0;
};