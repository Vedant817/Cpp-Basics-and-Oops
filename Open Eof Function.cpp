#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out;
	out.open("Sample.txt");
	out<<"This is C++";
	out.close();
//	Same thing can be done with the istream.
	ifstream in;
	in.open("Sample.txt");
	string st;
	while(in.eof()==0){
		getline(in,st);
		cout<<st;
	}
	in.close();

	
	return 0;
}

