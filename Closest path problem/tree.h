#pragma once
#include "node.h"

class tree {
public:
	void add(int new_node, int to_node);
	void remove(int old_node);
	bool traverse(int value, node* path);
	bool exists_in(int value, int* list, int list_size);

	tree();
	~tree();

private:
	node* tracker;
	int tree_size;
	int list_size;
	int* search_list;
};