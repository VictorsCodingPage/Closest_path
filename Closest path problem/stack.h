#pragma once
#include "node.h"

class stack {
public:
	int pop();
	void push(int value);

	stack();
	~stack();

private:
	node* top_node;

};