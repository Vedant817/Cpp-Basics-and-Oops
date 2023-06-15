#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	/*
		To write: write(const char* buffer,int)
		To read: read(char* buffer,int n)
	*/
	int arr[5]={10,5,4,98,6};
	fstream fs;
	fs.open("Binary.txt",ios::binary | ios::out);
	fs.write((char*)&arr,sizeof(arr));
	fs.close();
	fs.open("Binary.txt",ios::binary | ios::in);
	fs.read((char*)&arr,sizeof(arr));
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	fs.close();
	
	return 0;
}

