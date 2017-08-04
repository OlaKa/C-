#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>

using namespace std;

int factorial(unsigned int n) {
	if (n < 1) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

std::mutex myMutex;

void driver(unsigned int n) {
	unsigned int result = factorial(n);
	lock_guard<std::mutex> guard(myMutex);
	cout << n << "!= " << result << endl;
}

template<class T>
T* op_join(T *t) {
	t->join();
	return t;
}

template<class T>
void op_delete(T *t) {
	if (t) {
		delete t;
		t = nullptr;
	}
}

int main() {

	vector<threads*> threadList;
	int n;
	cout << "Input number of threads to create (max =10): ";
	cin >> n;
	if (n < 0) {
		n *= -1;
	}
	if (n > 10) {
		n = 10;
	}

	for (int i = 0; i < n; i++) {
		threadList.push_back(new threads(driver, i+1));
	}

	transform(threadList.cbegin(),threadList.cend(),threadList.begin(),op_join<std:thread>);

	for_each(threadsListbegin(),threadList.end(),op_delete<std::thread>);

	return 0;
}
