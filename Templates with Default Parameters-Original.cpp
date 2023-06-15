#include<iostream>
using namespace std;

template<class T1=int,class T2=float>

class demo{
	public:
		T1 a;
		T2 b;
		demo(T1 x,T2 y){
			a=x;
			b=y;	
		}
		void diaplay(){
			cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
		}
};

int main()
{
	demo<>d1(7,31.0);
	d1.diaplay();
	demo<int,char>d2(7,'S');
	d2.diaplay();
	
	return 0;
}

