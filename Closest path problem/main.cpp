#include "stack.h"
#include <iostream>
#include <Windows.h>


using namespace std;

int main() {
	int number;
	
	stack number_stack;

	do {
		cin >> number;
		if (number > -1) {
			number_stack.push(number);
		}

	} while (number > -1);


	do {
		number = number_stack.pop();
		cout << number << "\n";

	} while (number != -1);




	Sleep(1000);
	return 0;
}