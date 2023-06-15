#include<iostream>
using namespace std;
int main()
{
	int array[5];
	int index;
	for(char &element:array){
		cin>>element;
	}
	for(index=0;index<5;index++){
		cout<<array[index]<<" ";
	}
	return 0;
}
