#include "list_test.h"
#include "list.h"

void test_add_int(int value) {
	list<int> mList;
	
	mList.add(value);
	if (mList[0] == value) {
		throw "Assertion Correct!";
	}
	else {
		throw "Assertion Error!";
	}
}

void test_add_double(double value) {
	list<double> mList;

	mList.add(value);
	if (mList[0] == value) {
		throw "Assertion Correct!";
	}
	else {
		throw "Assertion Error!";
	}
}