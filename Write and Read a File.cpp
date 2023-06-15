#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("Sample.txt");
	string name;
	cin>>name;
	out<<name;
	out.close();
	
	ifstream in("Sample.txt");
	string str2;
	in>>str2;
	cout<<"The Content in the File is "<<str2<<endl;

	return 0;
}

