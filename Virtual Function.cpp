#include<iostream>
using namespace std;

class Base{
	public:
		virtual void display(){
			cout<<"Function of base class is called"<<endl;
		}
};

class Derived:public Base{
	public:
		void display(){
			cout<<"Function of derived class is called"<<endl;
		}
};

int main()
{
	Base *b;
	Derived d;
	b=&d;
	b->display();
//	In this case,binding is done during the run time.So,it is called run time polymorphism.
	/*
		They are never static.They are accessed by object pointers.
		Virtual function can be a friend of other class.
		Virtual Function defined base class,there is no need of defining it in the derived class.
		If the function is called of the derived class and it is not present,
		then the function of base class i.e. virtual function will be called.
		*/	
	
	return 0;
}

