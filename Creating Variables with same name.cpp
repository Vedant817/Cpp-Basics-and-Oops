#include<iostream>
using namespace std;

namespace first {
int val = 500;
}
 
// Global variable
int val = 100;

int main()
{
	int val=200;
	cout<<first::val<<endl;
	cout<<::val<<endl;
	cout<<val<<endl;
	
	return 0;
}

