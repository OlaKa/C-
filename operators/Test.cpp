#include "Test.h"

Test::Test() :
		id(0), name("") {

}
Test::Test(int id,string name):id(id),name(name){

}

void Test::print() {
	cout << id << " : " << name << endl;
}

const Test & Test::operator=(const Test &other){
	cout << "Assignment running" << endl;

	id = other.id;
	name = other.name;

	return *this;
}
