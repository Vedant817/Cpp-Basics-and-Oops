#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
	/*
		Hashing maps are given values to a particular key.This helps is faster access.
		Hashing is always encryption which means you cannot go from key to value(1to11).
	*/
	hash<char>hash_char;
	cout<<"Hash Key is "<<hash_char('a');
	
	return 0;
}

