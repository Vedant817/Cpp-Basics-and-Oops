#include<iostream>
using namespace std;

class Employee{
	private: 
	    int a,b,c;
	
	public:
		int d,e;
		void setData(int a1,int b1,int c1); //Declaration
		void getData(){
		cout<<"The Value a is "<<a<<endl;
		cout<<"The Value b is "<<b<<endl;
		cout<<"The Value c is "<<c<<endl;
		cout<<"The Value d is "<<d<<endl;
		cout<<"The Value e is "<<e<<endl;
	}
};

void Employee :: setData(int a,int b,int c){
	a=a;
	b=b;
	c=c;
}
int main()
{
	Employee harry;
//	harry.a=34; a is private and will give an error.
	harry.d=34;
	harry.e=89;
	harry.setData(1,2,3);
	harry.getData();
	
	return 0;
}
