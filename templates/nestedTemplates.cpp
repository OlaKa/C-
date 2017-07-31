#include <iostream>
#include "ring.h"

using namespace std;

int main() {

	ring<int>::iterator it;
	it.print();

	ring<string> vec(3);

	vec.add("Ola");
	vec.add("Lena");
	vec.add("Pelle");
	vec.add("Kalle");


	for(int i =0; i<vec.size();i++){
		cout<<vec.get(i) << endl;
	}
	return 0;
}
