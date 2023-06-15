#include<iostream>
using namespace std;

int main()
{
	try{
		throw 7;
	}
	catch(const int i){
		cout<<"The value is "<<i<<endl;
	}
	catch(...){
		cout<<"Default Catch"<<endl;
	}
	
	return 0;
}

