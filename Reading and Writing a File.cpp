#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("Sample.txt");
	string name="Vedant Mahajan";
	out<<"My name is "+name;
	

	return 0;
}

