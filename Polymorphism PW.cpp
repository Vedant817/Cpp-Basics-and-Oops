#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Complex{
	public:
		int real;
		int img;
		
		Complex(int x,int y){
			real=x;
			img=y;
		}
		
		Complex operator+ (Complex c){
			Complex ans(0,0);
			ans.real=real+c.real;
			ans.img=img+c.img;
			return ans;
		}
};

int main()
{
//	Polymorphism: Ability of object/methods to take different forms.
//	Compile Time Polymorphism: Operator Overloading and Function  Overloading
	
//	Operator Overloading:
	Complex c1(1,2);
	Complex c2(1,3);
	Complex c3=c1+c2;
	
	cout<<"The Real part is "<<c3.real<<" and imaginary part is "<<c3.img<<endl;
	
	return 0;
}
