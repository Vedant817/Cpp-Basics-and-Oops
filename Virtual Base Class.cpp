#include<iostream>
using namespace std;

class Student{
	protected:
		int roll_no;
	public:
		void set_number(int a){
			roll_no=a;
		}
		void print_number(){
			cout<<"The Roll No. is "<<roll_no<<endl;
		}
};

class test:virtual public Student{
	protected:
		int maths;
		int physics;
	public:
		void set_marks(int x,int y){
			maths=x;
			physics=y;
		}
		void get_marks(){
			cout<<"Marks of Maths and Physics are "<<maths<<" and "<<physics<<" respectively"<<endl;
		}
};

class sports:virtual public Student{
	protected:
		int score;
	public:
		void set_score(int a){
			score=a;
		}
		void display_score(){
			cout<<"The Score of the game is "<<score<<endl;
		}
};

class result:public test,public sports{
	protected:
		int total;
	public:
		void set_total(){
			total=maths+physics+score;
		}
		void display_result(){
			print_number();
			get_marks();
			display_score();
			cout<<"The total score is "<<total<<endl;
		}
};

int main()
{
	result r1;
	r1.set_number(7);
	r1.set_marks(99,95);
	r1.set_score(90);
	r1.set_total();
	r1.display_result();
	
	return 0;
}
