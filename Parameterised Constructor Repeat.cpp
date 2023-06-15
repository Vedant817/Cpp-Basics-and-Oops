#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Complex{
	private:
		int a,b;
	public:
		Complex(int ,int);
		void PrintData(){
			cout<<"The Complex Number is "<<a<<"+i"<<b<<endl;
		}
};
Complex::Complex(int x,int y){
	a=x;
	b=y;
}

int main()
{
	Complex a(10,5); //Parameterised Way.
	a.PrintData();
	
	return 0;
}
