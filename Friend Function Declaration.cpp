#include<iostream>
using namespace std;
//Forward Declaration:
class complex;

class Calculator{
	public:
		void add(int a, int b){
			return (a+b);
		}
		int sumComplex(complex ,complex )
};

class complex{
	int a,b;
	friend int Calculator :: sumComplex(complex o1, complex o2);
	public:
		void setNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
/*
Aliter:friend class Calculator;
*/
//		friend complex sumComplex(complex o1,complex o2);
		void printNumber(){
			cout<<"Your Number is "<<a<<"+i"<<b<<endl;
			    }
};
int Calculator :: sumcomplex(complex o1, complex o2){
	return (o1.a+o2.a);
}

//complex sumComplex(complex o1,complex o2){
//	complex o3;
//	o3.setNumber(o1.a+o2.a,o1.b+o2.b);
//	return o3;
//}

int main()
{
	complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	Calulator calc;
	int res=calc.sumcomplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
	
	return 0;
}
