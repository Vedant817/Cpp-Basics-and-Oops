#include<iostream>
#include<string.h>
using namespace std;

class Students{
	protected:
		char name[30];
		int roll_no;
	public:
		void GetDetail(){
			cout<<"Enter the Roll Number "<<endl;
			cin>>roll_no;
			cout<<"Enter the Name"<<endl;
			cin>>name[30];
		}
		void Dsiplay_Data(){
			cout<<"The Roll Number is "<<roll_no<<endl;
			cout<<"The Name of the student is "<<name<<endl;
		}
};

class Marks:public Students{
	protected:
		int subject1;
		int subject2;
	public:
		void Get_Marks(){
			cout<<"Enter the marks of Subject 1"<<endl;
			cin>>subject1;
			cout<<"Enter the marks of Subject 2"<<endl;
			cin>>subject2;
		}
		void Display_Marks(){
			cout<<"The Marks of subject 1 are "<<subject1<<endl;
			cout<<"The Marks of subject 2 are "<<subject2<<endl;
		}
		int present_Marks(){
			return (subject1+subject2);
		}
};
class Result:public Marks{
	private:
		int total;
	public:
		void Get_total(){
			total=present_Marks();
		}
		void Dsplay_result(){
			if(total>50){
				cout<<"PASSED"<<endl;
			}
			else{
				cout<<'FAILED'<<endl;
			}
		}
};

int main()
{
	Students s;
	s.GetDetail();
	s.Dsiplay_Data();
	Marks m;
	m.Get_Marks();
	m.Display_Marks();
	Result r;
	r.Get_total();
	r.Display_Marks();
	r.Dsplay_result();
	
	return 0;
}
