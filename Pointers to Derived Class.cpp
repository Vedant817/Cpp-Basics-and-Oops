#include<iostream>
using namespace std;

class BC{
	public:
		int b;
		void show(){
			cout<<"The value of b is "<<b<<endl;
		}
};

class DC :public BC{
	public:
		int d;
		void show(){
			cout<<"The value of b is "<<b<<endl;
			cout<<"The value of d is "<<d<<endl;
		}
};

int main(){
	//The pointer will point to the functions of the derived class which are inherited not the own functions.
	BC *bptr;
	BC Base;
	bptr=&Base;
	bptr->b=100;
	bptr->show();
	
	DC Derived;
	bptr=&Derived;
	bptr->b=200;
//	bptr->d this is invalid
	bptr->show(); //function of base class will be called
	
	DC *dptr;
	dptr=&Derived;
	dptr->d=300;
	dptr->show(); //function of derived class will be called
	
	cout<<"using ((DC*)bptr)"<<endl;
//	((DC*)bptr->d=400)
	
	return 0;
}
