#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream dataFile;
	dataFile.open("Saample.txt",ios::out);
	char ch;
	cout<<"Enter the Input text"<<endl;
	while(1){
		cin.get(ch);
		dataFile.put(ch);
		if(ch=='.'){
			break;
		}
	}
	dataFile.close();
	
	return 0;
}

