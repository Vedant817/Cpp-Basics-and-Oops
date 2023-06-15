//Parameterised Constructor.
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    	Complex(int x,int y); //Declaration of a constructor
    	void print_data(){
    		cout<<"Your number is "<<a<<"+i"<<b<<endl;
		}
};
Complex::Complex(int x,int y){
	a=x;
	b=y;
}

int main()
{
	Complex C(4,6);
	C.print_data();
	
	Complex B=Complex(10,5);
	B.print_data();
	
	return 0;
}
