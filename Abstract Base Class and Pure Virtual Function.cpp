#include<iostream>
using namespace std;

class Base{
	private:
		int a;
	public:
		virtual void display()=0;//Pure Virtual Function
		/*
			In the above syntax if derived class function is not there then it will throw an error where as in case of {} instead of =0 then there won't be any error.
		*/
};

class Derived:public Base{
	private:
		int b;
	public:
		Derived(int x){
			b=x;
		}
		void display(){
			cout<<"The value of the number there is "<<b<<endl;
		}
};

int main()
{
//	Abstract class is the one which has atleast one pure virtual function and can't be used for creating the objects.
//	Abstract class is made because we know some other class will be derived from it.
	Base *b;
	Derived d(5);
	b=&d;
	b->display();

	return 0;
}

