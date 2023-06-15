#include<iostream>
using namespace std;

class demo{
	private:
		int a,b;
	public:
		demo(int x,int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<"The sum of two numbers is "<<a+b<<endl;
		}
};

int main()
{
	demo d[5]={demo(1,1),demo(1,2),demo(1,3),demo(1,4),demo(1,5)};
	for(int i=0;i<5;i++){
		d[i].show();
	}
	
	return 0;
}

