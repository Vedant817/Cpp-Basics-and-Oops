#include<iostream>
using namespace std;

class Data{
	private:
		int a;
		int b;
	public:
		void setValue(){
			cin>>a>>b;
		}
		void getValue(){
			cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
		}
};

int main()
{
	Data d1;
	Data *p;
	p=&d1;
	d1.setValue();
	d1.getValue();
	p->setValue();
	p->getValue();
	
	return 0;
}
