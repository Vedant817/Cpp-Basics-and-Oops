#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Student{
	private:
		int id;
		int roll_no;
		char name[30];
		void setData(){
			cout<<"Id of the Student"<<endl;
			cin>>id;
			cout<<"Eter the Roll No. of the Student"<<endl;
			cin>>roll_no;
			cout<<"Enter the name of the Student"<<endl;
			cin>>name;
		}
	public:
		void checkData(){
			setData();
		}
		void getData(){
			cout<<id<<endl;
			cout<<roll_no<<endl;
			cout<<name<<endl;
		}
};

int main()
{
	cout<<endl;
	Student s1,s2;
	s1.checkData();
	s2.checkData();
	s1.getData();
	s2.getData();
	return 0;
}
