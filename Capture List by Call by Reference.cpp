//Capture List by Call by Reference
#include<iostream>
using namespace std;

int main()
{
	int c{5};
	auto func=[&c](){
		cout<<"The value of c is "<<c<<endl;
	};
	for(int i=0;i<5;i++){
		cout<<c<<endl;
		func();
		c++;
	}
	func();
	
	return 0;
}
