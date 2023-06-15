/*
Types of Pointers:
1.Wild
2.Null
3.Dangling
4.Void
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	int *ptr;  //A wild pointer is type of a pointer in which user declares the pointer but is not initialised.This points to random memory location and due to this we get undefined behaviour and crashes.
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	return 0;
}
