#include<iostream>
using namespace std;

class Student{
	private:
		int a;
	public:
		virtual void show()=0;
};

class Science:public Student{
	private:
		int b;
	public:
		void show(){
			cout<<"Science Class is called"<<endl;
		}
};

class Commerce:public Student{
	private:
		int c;
	public:
		void show(){
			cout<<"Commerce Class is called"<<endl;
		}
};

class Arts:public Student{
	private:
		int d;
	public:
		void show(){
			cout<<"Arts class is called"<<endl;
		}
};

int main()
{
	Student *s[3];
	Science sc;
	Commerce co;
	Arts  ar;
	s[0]=&sc;
	s[1]=&co;
	s[2]=&ar;
	s[0]->show();
	s[1]->show();
	s[2]->show();
	
	return 0;
}
