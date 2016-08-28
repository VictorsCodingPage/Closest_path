#include "list.h"
#include <cstdlib>

void mlist::add(int value) {
	node* tmp = (node*)calloc(1, sizeof(node));
	tmp->value = value;
	if (start == NULL) {
		start = tmp;
	}
	else {
		index_search(size - 1)->forward = tmp;
	}
	size++;
}

bool mlist::isEmpty() {
	return (start == NULL);
}

int& mlist::operator[](int index) {
	return index_search(index)->value;
}

//char* mlist::print_mlist() {
//	char* string = (char*)calloc(size, sizeof(char));
//	for (int i = 1; i < size-1; i++) {
//		string[i] = (char)index_search(i)->value;
//	}
//	return string;
//}

node* mlist::index_search(int index) {
	node* tracker = start;
	if (index < size) {
		for (int i = 0; i < index; i++) {
			if (tracker->forward != NULL) {
				tracker = tracker->forward;
			}
		}
	}
	else {
		throw "Index out of bounds!";
	}
	return tracker;
}

bool mlist::value_exists(int value) {
	node* tracker = start;
	for (int i = 0; i < size; i++) {
		if (tracker->value == value)
			return true;
		else
			tracker = tracker->forward;
	}
	return false;
}

mlist::mlist() {
	start = NULL;
	size = 0;
}

mlist::~mlist() {
	node* tmp;
	if (start != NULL) {
		while (start->forward != NULL) {
			tmp = start->forward;
			free(start);
			start = tmp;
		}
		free(start);
	}
}
