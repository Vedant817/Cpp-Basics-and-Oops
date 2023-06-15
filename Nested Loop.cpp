#include<iostream>
using namespace std;

int main()
{
	int marks;
	cin>>marks;
	if(marks<40){
		if(marks<33){
			cout<<"FAIL"<<endl;
		}
	}
	else{
		cout<<"Pass"<<endl;
	}
	
	return 0;
}
