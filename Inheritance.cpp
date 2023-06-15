#include<iostream>
#include<cmath>
using namespace std;

class Employee{
	public:
		int id;
		float salary;
		Employee(int idep){
			id = idep;
			salary=34.0;
		}
		Employee(){
		};
};
//Derived Class: {{Derived Class Name }}:{{Visibility Mode}} {{Base Class Name}}
class Programmer : Employee{
	public:
		int language_code =9;
	//If it is inherited publically then the public members of base class become public members of the derived class where as when it is inherited privately then the public membersc of base class become public members of the derived class.
	//Default Visibility mode is private.
		Programmer(int inp_id){
			id = inp_id;
		};
};

int main()
{
	Employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	Programmer Skill(5);
	cout<<Skill.language_code<<endl;
	
	return 0;
}
