#include "tree.h"
#include <cstdlib>
#include "list"
#include <iostream>

using namespace std;

void tree::add(int value) {
	node* tmp = (node*)calloc(1, sizeof(node));
	tmp->value = value;
	if (tracker == NULL) {
		tracker = tmp;
		first_node = tmp;
	}
	else {
		first_node->backward = tmp;
		tracker->forward = tmp;
		tmp->backward = tracker;
		tmp->forward = first_node;
		tracker = tmp;
	}
	tree_size++;
}

bool tree::find(int value) {
	while (tracker->value != value) {
		if (search_list.value_exists(tracker->value))
			return false;
		search_list.add(tracker->value);
		traverse();
	}
	return true;
}

void tree::traverse() {
	tracker = tracker->forward;
}

void tree::remove(int old_node) {


}

tree::tree() {
	first_node = NULL;
	tracker = NULL;
	tree_size = 0;
	list_size = 50;
	search_list;
};

tree::~tree() {


};