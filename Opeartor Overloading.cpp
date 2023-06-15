#include<iostream>
using namespace std;

class Complex{
	private:
		int a,b;
	public:
		void getData(){
			cout<<"Enter the Value of a and b"<<endl;
			cin>>a>>b;
		}
		Complex operator+(Complex obj){
			Complex object;
			object.a=obj.a+a;
			object.b=obj.b+b;
			return object;
		}
		void display(){
			cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
		}
};

int main()
{
	Complex c1;
	Complex c2;
	c1.getData();
	c2.getData();
	Complex c3;
//	c3=c1.add(c2);
	c3=c1+c2;
	c3.display();
	
	return 0;
}
