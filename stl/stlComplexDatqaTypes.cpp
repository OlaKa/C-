//============================================================================
// Name        : STL.cpp
// Author      : Ola Karlsson
// Version     :
// Copyright   : Free to copy
// Description : Complex data types, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	string name;

	map<string, vector<int> > scores;

	scores["Ola"].push_back(10);
	scores["Ola"].push_back(15);
	scores["Ola"].push_back(35);
	scores["Lena"].push_back(10);

	for(auto it=scores.begin(); it != scores.end(); it++){
		name = it->first;
		auto scoreList = it->second;

		cout <<name<< " : " <<flush;

		for(int i =0;i < scoreList.size(); i++){
			cout << scoreList[i] << " " << flush;
		}
		cout << endl;
	}


	return 0;
}
