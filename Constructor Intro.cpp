#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Complex{
	private:
		int a,b;
	public:
		Complex(void);
		void printData(){
			cout<<"The Complex Number is "<<a<<"+i"<<b<<endl;
		}
};
Complex::Complex(){
	a=10;
	b=0;
}

int main()
{
	//It is a public function with name same as that of class.It is called automatically and is used of initialise the value of object variables.
	Complex c;
	c.printData();
	
	return 0;
}
