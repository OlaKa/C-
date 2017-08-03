#include <iostream>
#include<vector>
#include<algorithm>
#include<thread>
#include<mutex>

using namespace std;

int factorial(unsigned int n) {
	if (n < 1) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

std::mutex myMutex;

void driver (unsigned int n){
	unsigned int result = factorial(n);
	lock_guard<std::mutex> guard(myMutex);

}


int main() {

	return 0;
}
