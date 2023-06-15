#include<iostream>
using namespace std;

class Base{
	private:
		int a;
	public:
		virtual void show()=0;
};

class Derived:public Base{
	private:
		int b;
	public:
		void show(){
			cout<<"Derived is called"<<endl;
		}
};

int main()
{
	Derived d;
	d.show();
	
	return 0;
}
