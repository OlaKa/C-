#include <iostream>
#include "Test.h"

using namespace std;

int main() {

	Test test(10, "Mike");
	test.print();

	Test test2(20,"Bob");

	test2=test;

	test2.print();

	return 0;
}
