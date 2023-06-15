#include<iostream>
using namespace std;

int main()
{
	hash<int>hash_int;
	cout<<"Hash Key is "<<hash_int(31);
	cout<<"Hash Key is "<<hash_int(-31);
//	Look like hash key for positive integer is same as its value and for negative it is a complicated code.

	return 0;
}

