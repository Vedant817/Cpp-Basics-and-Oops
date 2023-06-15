#include<iostream>
using namespace std;

int main()
{
	//The body of the Lambda Function does not have accesss to the data outside it.
	double a{5.0};
	double b{6.0};
	auto func=[a,b](){
		cout<<"The sum of a and b is "<<a+b<<endl;
	}
	func();
	//Function of Capture list is to give u the access of the data declared outside the Lambda Function.
	return 0;
}
