#include<iostream>
#include<cmath>
using namespace std;

class Parent{
	public:
		virtual void print(){
			cout<<"Parent Class"<<endl;
		}
		void show(){
			cout<<"Parent Class"<<endl;
		}
};

class Child:public Parent{
	public:
		void print(){
			cout<<"Child Class"<<endl;
		}
		void show(){
			cout<<"Child Class"<<endl;
		}
};

int main()
{
//	Run Time Polymorphism:Using Function Overriding
	Parent *p;
	Child c;
	p=&c;
	p->print();
	p->show();
//	Function Overriding will be done for those functions for which virtual keyword is defined.
	c.print();
	c.show();
//	Slower than Compile Time Polymorphism
	
	return 0;
}
