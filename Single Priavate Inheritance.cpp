#include<iostream>
#include<cmath>
using namespace std;

class Base{
	private:
		int data1;
	public:
		int data2;
		void setData();
		int getData1();
		int getData2();
};
void Base::setData(){
	data1=10;
	data2=25;
}
int Base::getData1(){
	return data1;
}
int Base::getData2(){
	return data2;
}

class Derived : private Base{
	private:
		int data3;
	public:
		void process();
		void display();
};

void Derived::process(){
	setData();
	data3=data2*getData1();
}
void Derived::display(){
	cout<<"The value of data 1 is "<<getData1()<<endl;
	cout<<"The value of data 2 is "<<getData2()<<endl;
	cout<<"The value of data 3 is "<<data3<<endl;
}

int main()
{
	Derived der;
//	der.setData();
	der.process();
	der.display();
	
	return 0;
}
