#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//	In this case the content in the file is being read char by char.
	fstream file;
	char ch,fileName[80];
	cout<<"Enter the file name"<<endl;
	cin>>fileName;
	file.open(fileName,ios::in);
	if(!file){
		cout<<"File doesn't exist"<<endl;
	}
	file.get(ch);
	while(!file.eof()){
		cout<<ch;
		file.get(ch); //Get anothr character
	}
	file.close();
	/*
		Get function can take 0,2 or 3 arguments as the input.
		1.get()
		2.get(char* str,num,xyz) In this case str is read till the num-1 characters or till the word xyz is reached.
		3.get(char* str,num) In this case str is read till thenum-1 characters are reached.
	*/
	
	return 0;
}

