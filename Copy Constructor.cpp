#include<iostream>
using namespace std;

class Number{
	private:
		int a;
	public:
		Number(int num){
			a=num;
		}
		Number(Number &obj){
			cout<<"Copy Constructorc is Called."<<endl;
			a=obj.a;
		}
		void Display(){
			cout<<"The number of this object is "<<a<<endl;
		}
};

int main()
{
	//C++ compiler provides a default copy constructor to each class/constructor.
	Number x(10),y(1),z(15);
	x.Display();
	y.Display();
	z.Display();
	cout<<"\n";
	Number z1(x);
	z1.Display();
	
	Number z3 = z1; //Copy Constructor will be invoked.
	
	return 0;
}
