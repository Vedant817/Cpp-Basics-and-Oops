#include<iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	public:
		void setId(void){
			salary=112;
			cout<<"Enter the id of the employee ";
			cin>>id;
		}
		void getId(void){
			cout<<"The id of this emloyee is "<<id<<endl;
		}
};

int main()
{
	Employee fb[4];
	for(int i=0;i<4;i++){
		fb[i].setId();
		fb[i].getId();
	}
	
	return 0;
}
