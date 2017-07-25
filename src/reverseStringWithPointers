//============================================================================
// Name        : Char.cpp
// Author      : Ola Karlsson
// Version     :
// Copyright   : Your copyright notice
// Description : Reversing a string with pointers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	int nChar = sizeof(text) - 1;

	char *pStart = text;

	char *pEnd = text + nChar - 1;

	//cout << *pEnd << endl;

	while (pEnd >= pStart) {
		cout << *pEnd << flush;
		pEnd--;
	}

	return 0;
}
