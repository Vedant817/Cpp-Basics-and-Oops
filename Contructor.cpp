#include<iostream>
using namespace std;
class Complex{
//	Constructor is a special member function with same name as that of the class. It is used to initialise the objects of it's class.It is automatically invoked when an object is created.
//  Creating a constructor:
    int a,b;
    public:
    	Complex(void);
    	void print_data(){
    		cout<<"Your number is "<<a<<"+i"<<b<<endl;
		}
};
Complex::Complex(){
	a=10;
	b=0;
}

int main()
{
	Complex C;
	C.print_data();
	
	return 0;
}
