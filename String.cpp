#include<iostream>
#include<string>
using namespace std;

int main()
{
	/*
	Strings are user defined data-types which contain the sequence of characters.
	String Syntax:
					String String_Name="XXX";
	*/
	string Name="Vedant";
	cout<<"The Name is "<<Name<<endl;
	string Surname("Mahajan");
	cout<<"The Surname of the above person is "<<Surname<<endl;

//	For taking multi word string as an input we need to use getline function: getline(cin,String-Name);
	string college;
	getline(cin,college);
	cout<<"The name of the college is "<<college<<endl;

	return 0;
}
