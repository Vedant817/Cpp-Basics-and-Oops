#include<iostream>
#include<string>
using namespace std;

int main()
{
	// to_string() used to convert numeric value to string.
	int num=432;
	string str = to_string(num);
	str+="1";
	cout<<str<<endl;
	//used when we need to append a digit to the number.
	
	return 0;
}
