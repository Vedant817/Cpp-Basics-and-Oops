#include<iostream>
using namespace std;

template<class T>
class demo{
	public:
		T data;
		demo(T a){
			data=a;
		}
		void display();
};
template<class T>
void demo<T>::display(){
	cout<<"The value is "<<data<<endl;
}
/******************************************/
void func(int a){
	cout<<"I'm Func1 "<<a<<endl;
}

template<class T>
void func(T a){
	cout<<"I'm Func1 with Template"<<a<<endl;
}
/******************************************/
int main()
{
	demo<int>d(5);
	cout<<d.data<<endl;
	d.display();
	cout<<"****************"<<endl;
	func(4);//here the exact match will be the priority
	
	return 0;
}

