#include<iostream>
#include<fstream>
using namespace std;

/*
	1. fstreambase
	2. ifstream ->derived from fstreambase
	3. ofstream ->derived from fstreambase
*/

int main()
{
//	Stream is the interface through which we can communicate between the C++ and the file.
	
	/*
		In order to work with files, there are two ways:
		1. Using the Constructors
		2. Using the member function open() of the class
	*/
	string st ="Vedant Mahajan";
	string st2;
	ofstream out("Sample.txt");
	out<<st;//Writing a file
	
	ifstream in("Sample.txt");
//	in>>st2;
	getline(in,st2);
	cout<<st2<<endl;

	return 0;
}

