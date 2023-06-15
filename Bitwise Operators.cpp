#include<iostream>
using namespace std;

int main()
{
	// Bitwise Operator of 0101 is 1010.
	// Left Shift of 0101 is 1010 like we need to shift the digits towards left.
	// Left Shift << and Right Shift is >> .
	// ^ act as a XOR .
	int num1=20;
	int num2=10;
	
	cout<<(num1<<1)<<endl;
	cout<<(num2>>1)<<endl;
	
	cout<<(num1|num2)<<endl;
	cout<<(num1&num2)<<endl;
	
	return 0;
}
