#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	/*
		Ignore() member function can be used to read and discard character from the input stream.
		istream &ignore(streamsize num=1,int_type=EOF)
		It reads and discards characters until either num characters have been ignored (1 by default) or the character specified by delim is encountered (EOF by default).
		If the delimiting character is encountered, it is not removed from the input stream. Here, int_type is defined as some form of integer.
	*/
	ifstream in("Sample.txt");
	if(!in){
		cout<<"File is unable to open"<<endl;
	}
	in.ignore(10);
	char ch;
	while(in){
		in.get(ch);
		if(ch){
			cout<<ch;
		}
	}
	in.close();
	
	return 0;
}

