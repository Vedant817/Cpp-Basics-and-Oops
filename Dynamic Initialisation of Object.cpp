#include<iostream>
using namespace std;

class demo{
	private:
		int a,b;
	public:
		void setData(){
			a=5;
			b=6;
		}	
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};

int main()
{
	demo *ptr=new demo;
	ptr->setData();
	ptr->show();
	
	return 0;
}

