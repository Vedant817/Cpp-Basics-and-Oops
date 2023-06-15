#include<iostream>
using namespace std;

int main()
{
	/* Syntax:
	Lambda Functio Signature:
		[Capture List](parameter)->Return type{optioal}{ 
		Function Body
	}
	We can call a Lambda Function by not giving it a name by just adding() just after {}
	*/
	auto func=[](){
		cout<<"This is a Lambda Function."<<endl;
	};
//	cout<<func()<<endl;
	func();
	
	return 0;
}
