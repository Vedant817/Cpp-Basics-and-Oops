//Adding object variable with normal variable using Operator Overloading
#include<iostream>
using namespace std;

class demo{
	private:
		int a;
	public:
		demo(){
			a=0;
		}
		demo(int a){
			this->a=a;
		}
		demo operator+(int x){
			demo dd;
			dd.a=a+x;
			return dd;
		}
		void display(){
			cout<<"The value of a is "<<a<<endl;
		}
};

int main()
{
	demo d1(10);
	demo d2;
	d2=d1+5;
	d2.display();
	
	return 0;
}

