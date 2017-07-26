//============================================================================
// Name        : Arrays.cpp
// Author      : Ola Karlsson
// Version     :
// Copyright   : Your copyright notice
// Description : Arrays and pointers, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string texts[] = { "one", "two", "three" };

void show1(string fruits[]) {

	//Return size of pointer
	//cout << "Size of array when passed into function: "<< sizeof(fruits) << endl;

	for (int i = 0; i < 3; i++) {
		cout << fruits[i] << endl;
	}

}

void show2(string *fruits) {

	//Return size of pointer
	cout << "Size of pointer when passed into function: "<< sizeof(fruits) << endl;

	for (int i = 0; i < 3; i++) {
		cout << fruits[i] << endl;
	}

}

string *getArray() {

	//Needs to be allocated as static or else it will fall out of scope
	//static string texts[] = {"one", "two","three"};

	return texts;

}

int main() {

	string fruits[] = { "apple", "orange", "banana" };

	cout << "Size of array: " << sizeof(fruits) << endl;

	show1(fruits);
	cout << "=================" << endl;
	show2(fruits);
	string *ptr;
	ptr = getArray();
	cout << "=================" << endl;
	for (int i = 0; i < 3; i++) {
		cout << ptr[i] << endl;
	}

	return 0;
}
