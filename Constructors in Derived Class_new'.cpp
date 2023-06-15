#include<iostream>
using namespace std;

class Base1{
	private:
		int data1;
	public:
		Base1(int i){
			data1=i;
			cout<<"Constructor of Base1 is called"<<endl;
		}
		void print_data(){
			cout<<"The value of Data stored is "<<data1<<endl;
		}
};

class Base2{
	private:
		int data2;
	public:
		Base2(int i){
			data2=i;
			cout<<"Constructor of Base2 is called"<<endl;
		}
		void print_data(){
			cout<<"The value of Data stored is "<<data2<<endl;
		}
};

class Derived:public Base1,public Base2{
	private:
		int derived1,derived2;
	public:
		Derived(int a,int b,int c,int d):Base1(a),Base2(b){
			derived1=c;
			derived2=d;
			cout<<"Constructor of Derived class is called"<<endl;
		}
		void print_derived(){
			cout<<"The value of  Derived1 and Derived2 are "<<derived1<<" and "<<derived2<<endl;
		}
};

int main()
{
	Derived d(5,10,15,20);;
	d.Base1::print_data();
	d.Base2::print_data();
	d.print_derived();
	cout<<"End of the program"<<endl;
	
	return 0;
}
