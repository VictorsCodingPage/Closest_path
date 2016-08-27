#include "stack.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int stack::pop() {
	node* tmp;
	int output;
	if (top_node != NULL) {
		output = top_node->value;
		tmp = top_node->backward;
		free(top_node);
		top_node = tmp;
	}
	else {
		output = -1;
	}

	return output;
};

void stack::push(int value) {
	if (top_node == NULL) {
		top_node = (node*)calloc(1, sizeof(node));
		top_node->value = value;
		top_node->backward = NULL;
	}
	else {
		node* tmp = (node*)calloc(1, sizeof(node));
		tmp->backward = top_node;
		top_node = tmp;
		top_node->value = value;
	}
};

stack::stack() {
	top_node = NULL;
};

stack::~stack() {
	node* tmp;
	if (top_node != NULL) {
		while (top_node->backward != NULL) {
			tmp = top_node->backward;
			free(top_node);
			top_node = tmp;
		}
		free(top_node);
	}
};