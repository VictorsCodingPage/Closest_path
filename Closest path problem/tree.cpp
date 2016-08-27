#include "tree.h"
#include <cstdlib>

void tree::add(int new_node, int to_node) {
	node* tmp = (node*)calloc(1, sizeof(node));
	if (tracker == NULL) {
		tracker = tmp;
	}
	else {
		tracker->forward = tmp;
		tmp->backward = tracker;
		tracker = tmp;
	}
	tree_size++;
}

bool tree::traverse(int value, node* path) {
	if (tracker->value == value) {
		return true;
	}


}

bool tree::exists_in(int value, int* list, int list_size) {
	for (int i = 0; i < list_size; i++) {
		if (list[i] == value) {
			return true;
		}
	}
	return false;
}

void tree::remove(int old_node) {


}

tree::tree() {
	tracker = NULL;
	tree_size = 0;
	list_size = 50;
	search_list = (int*)calloc(list_size, sizeof(int));
};

tree::~tree() {


};