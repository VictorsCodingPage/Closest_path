#pragma once
#include "node.h"
#include "list.h"

class tree {
public:
	void add(int value);
	void remove(int old_node);
	bool find(int value);
	void traverse();

	tree();
	~tree();

private:
	node* first_node;
	node* tracker;
	int tree_size;
	int list_size;
	mlist search_list;
};