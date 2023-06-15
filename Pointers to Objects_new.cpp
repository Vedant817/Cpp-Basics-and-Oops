#include<iostream>
using namespace std;

class Complex{
	private:
		int real,imaginary;
	public:
		void set_data(int a,int b){
			real=a;
			imaginary=b;
		}
		void get_data(){
			cout<<"The real part of the complex number is "<<real<<endl;
			cout<<"The imaginary part of the complex number is "<<imaginary<<endl;
		}
};

int main()
{
	Complex c1;
	c1.set_data(5,10);
	c1.get_data();
	Complex *ptr=&c1;
	ptr->set_data(20,30);
	ptr->get_data();
	
	return 0;
}
