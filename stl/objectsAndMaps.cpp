//============================================================================
// Name        : Objects.cpp
// Author      : Ola Karlsson
// Version     :
// Copyright   : No copyright
// Description : Objects and Maps, Ansi-style
//============================================================================

#include <iostream>
#include<map>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person() :
			name(""), age(0) {
	}

	Person(const Person &other) :
			name(other.name), age(other.age) {
		cout << "Copy constructor running!" << endl;
	}

	Person(string name, int age) :
			name(name), age(age) {
	}

	void print() {
		cout << name << ": " << age << endl;
	}

};

int main() {

	map<int, Person> people;

	people[50] = Person("Mike", 40);
	people[32] = Person("Raj", 20);
	people[1] = Person("Vicky", 30);
	people[45] = Person("Bob", 24);

	people.insert(make_pair(55, Person("Ola", 50)));
	people.insert(make_pair(65, Person("Lena", 47)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end();
			it++) {
		cout << it->first << ": " << flush;
		it->second.print();
	}

	return 0;
}
