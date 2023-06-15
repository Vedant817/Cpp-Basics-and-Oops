#include<iostream>
#include<string>

using namespace std;

class X{
	public:
		string a;
		X(string s){
			a=s;
		}
		~X(){
			cout<<"X is closed"<<endl;
		}
};

class Y{
	public:
		string b;
		Y(string s){
			b=s;
		}
		~Y(){
			cout<<"Y is closed"<<endl;
		}
};

class Z:public X,public Y{
	public:
		string c;
		Z(string s,string t):X(s),Y(t){
			c=a+b;
		}
		~Z(){
			cout<<c<<endl;
		}
};

int main()
{
	Z("Hello ","World");
//	cout<<Z.c<<endl;
	
	return 0;
}
