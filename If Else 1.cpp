#include<iostream>
using namespace std;
// In case of == we need to apply the operations from right to left.

int main()
{
	int num;
	cin>>num;
	if(num%2==0){
		cout<<"Even Number"<<endl;
	}
	else if(num%2!=0){
		cout<<"Odd Number"<<endl;
	}
	else if(num<0){
		cout<<"Invalid Entry"<<endl;
	}
	
	return 0;
}
