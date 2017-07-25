//============================================================================
// Name        : Pointers.cpp
// Author      : Ola Karlsson
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers and Arrays in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[] = { "one", "two", "three", "four" };
	//cout << sizeof(texts)/sizeof(string) << endl;
	string *pTexts = texts;

	//loop array by index
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << " " << flush;
	}

	cout << endl;

	//loop array by index pointer
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;

	//Inkrementerar pekaren att peka på nästa byte
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	//Increment pointer and comapare with end-pointer in array
	string *pElement = &texts[0];
	string *pEnd = &texts[3];

	while (true) {
		cout << *pElement << " " << flush;

		if (pElement == pEnd) {
			break;
		}
		pElement++;
	}
	return 0;
}
