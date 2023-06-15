#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//	The eof() member function report when the end of file has been encountered.It returns true when there is no information to read.
	fstream namefile;
	char input[81];
	namefile.open("Sample.txt",ios::in);
	if(!namefile){
		cout<<"File Opening Error"<<endl;
	}
	namefile>>input;
	while(!namefile.eof()){
		cout<<input<<endl;
		namefile>>input;
	}
	namefile.close();
	
	return 0;
}

