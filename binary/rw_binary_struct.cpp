//============================================================================
// Name        : Binary.cpp
// Author      : Ola Karlsson
// Version     :
// Copyright   : Your copyright notice
// Description : Read-Write Binary, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)

struct Person {

	char name[50];
	int age;
	double height;
};
#pragma pack(pop)

int main() {

	Person someone = { "Frodo", 220, 0.8 };

	string fileName = "test.bin";

	//Write to binary file

	ofstream outputFile;

	outputFile.open(fileName, ios::binary);

	if (outputFile.is_open()) {

		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();

	} else {
		cout << "Could not create file" << endl;

	}

	//Read binary file

	//Empty struct to read into
	Person someoneElse = { };

	ifstream inputFile;

	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open()) {

		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		inputFile.close();

	} else {
		cout << "Could not read file: " << fileName << endl;

	}

	cout << "Name: " << someoneElse.name << " Age: " << someoneElse.age
			<< " Height: " << someoneElse.height << endl;

	return 0;
}
