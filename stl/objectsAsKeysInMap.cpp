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
	}

	Person(string name, int age) :
			name(name), age(age) {
	}

	void print() const {
		cout << "Name: " << name << ": " << "Age: " << age << endl;
	}

	bool operator<(const Person &other) const {
		if (age == other.age)
			return name < other.name;
		else {
			return name < other.name;
		}
	}

};

int main() {

	map<Person, int> people;

	people[Person("Mike", 40)] = 45;
	people[Person("Bob", 40)] = 30;
	people[Person("Jessica", 40)] = 15;
	people[Person("Eva", 40)] = 10;

	people.insert(make_pair(Person("Ola", 50), 55));
	people.insert(make_pair(Person("Lena", 47), 67));

	for (auto it = people.begin(); it != people.end(); it++) {
		cout << it->second << ": " << flush;
		it->first.print();
	}

	return 0;
}
