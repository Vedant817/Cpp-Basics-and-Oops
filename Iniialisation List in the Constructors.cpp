#include<iostream>
using namespace std;

class Test{
	private:
		int a,b;
	public:
		Test(int i,int j):a(i),b(j){
			//a(i),B(j+a):Valid Syntax
			//b(j),a(i+b):Invalid Syntax
			cout<<"This is Initialisation List"<<endl;
		}
		void display(){
			cout<<"The value of a and b is "<<a<<" and "<<b<<endl;
		}
};

int main()
{
	/*
		Syntax:
				Constructor(Argument-List):Initialisation
														{Code+Information}
	*/
	Test t(10,50);
	t.display();
	
	return 0;
}
