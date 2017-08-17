#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers1 = {1, 5, 42, 7, 8};
	vector<int> numbers2 = {10, 7, 4, 2, 2};
	vector<int> results;
	
	transform(numbers1.begin(), numbers1.end(),
	               numbers2.begin(),
	               back_inserter(results),
	               [](int i, int j) {return i+j;});

	for (auto it = results.begin(); it != results.end(); it++) {
			cout << "Sum: "<< *it <<endl;

	}
}
