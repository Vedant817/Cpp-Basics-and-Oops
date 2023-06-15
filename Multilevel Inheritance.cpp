#include<iostream>
using namespace std;

class Student{
	protected:
		int roll_number;
	public:
		void set_roll_number(int);
		void get_roll_number();
};
void Student::set_roll_number(int r){
	roll_number=r;
}
void Student::get_roll_number(){
	cout<<roll_number<<endl;
}

class Exam:public Student{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float,float);
		void get_marks();
};
void Exam::set_marks(float m,float p){
	maths=m;
	physics=p;
}
void Exam::get_marks(){
	cout<<maths<<endl;
	cout<<physics<<endl;
}

class Result:public Exam{
	private:
		float percentage;
	public:
		void display();
};
void Result::display(){
	get_roll_number();
	get_marks();
	cout<<"Your Percentage is "<<(maths+physics)/2<<endl;
}

int main()
{
	Result Vedant;
	Vedant.set_roll_number(7);
	Vedant.set_marks(98.0,99.0);
	Vedant.display();
	
	return 0;
}
