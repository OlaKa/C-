#include <iostream>
using namespace std;

class Test {
private:
	int a;
	int b;
public:
	Test() :
			a(5), b(7) {
	}

	int foo() {
		return a;
	}
	int bar() {
		return b;
	}

};

int main() {

	Test test;

	int (Test::*ptr)();

	ptr = &Test::foo;

	(test.*ptr)();

	cout << "Output from foo(): " << (test.*ptr)() << endl;

	ptr = &Test::bar;

	(test.*ptr)();

	cout << "Output from bar(): " << (test.*ptr)() << endl;

	return 0;
}
