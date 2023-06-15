#include<iostream>
#include<cmath>
using namespace std;

class Complex{
	private:
		int a,b;
	public:
		Complex(int x,int y){
			a=x;
			b=y;
		}
		Complex(int x){
			a=x;
			b=5;
		}
		void printData(){
			cout<<"The Complex Number is "<<a<<"+i"<<b<<endl;
		}
};

int main()
{
	//If in a single class we can make number of constructors then, this is called Constructor Overloading.
	Complex c1(4,6);
	c1.printData();
	Complex c2(4);
	c2.printData();
	return 0;
}
