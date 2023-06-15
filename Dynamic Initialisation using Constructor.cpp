#include<iostream>
using namespace std;

class demo{
	private:
		int a,b;
	public:
		demo(){
			this->a=5;
			this->b=6;
		}
		demo(int a,int b){
			this->a=a;
			this->b=b;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};

int main()
{
	demo *ptr=new demo;
	ptr->show();
	
	demo *ptr2=new demo(7,4);
	ptr2->show();
	
	return 0;
}

