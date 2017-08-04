
#include <iostream>
using namespace std;

class Test{
private:
	int one{1};
	int two{2};

public:
	void run(){
		int three{3};
		int four{4};

		auto pLambda = [&,this](){

			one =111;
			cout << one <<endl;
			cout << two <<endl;
			cout << three <<endl;
			cout << four <<endl;

		};
		pLambda();
	}

};

int main() {
	//[]{}()


	Test test;
	test.run();

	cout << "*************************"<< endl;
	int one = 1;
	int two = 2;
	int three = 3;

	//Capture one and two by value
	[one,two](){cout <<one<<", "<<two <<endl;}();

	//Capture all local variables by value
	[=](){cout <<one<<", "<<two <<endl;}();

	//Capture two variables by value and one by reference
	[=,&three](){three=8;cout <<one<<", "<<two <<", "<<three<<endl;}();

	//default capture all local variables by ref.
	[&](){three=57;cout <<one<<", "<<two <<", "<<three<<endl;}();

	three=3;
	//default capture all by ref except three
	[&, three](){two=77;cout <<one<<", "<<two <<", "<<three<<endl;}();


	return 0;
}
