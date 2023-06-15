#include<iostream>
using namespace std;

class Complex{
	public:
		int a,b;
		void getData(){
			cout<<"Enter the Value of a and b"<<endl;
			cin>>a>>b;
		}
		friend Complex operator+(Complex o1,Complex o2);
		void display(){
			cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
		}
};

Complex operator+(Complex o1,Complex o2){
	Complex o3;
	o3.a=o1.a+o2.a;
	o3.b=o1.b+o2.b;
	return o3;
}

int main()
{
	Complex c1;
	Complex c2;
	c1.getData();
	c2.getData();
	Complex c3;
//	c3=c1.add(c2);
//	c3=add(c1,c2);
	c3=c1+c2;
	c3.display();
	
	return 0;
}
