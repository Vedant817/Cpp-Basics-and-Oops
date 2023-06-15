#include<iostream>
using namespace std;

class Employee{
	private:
		int id;
		static int count;
	public:
		void setData(){
			cout<<"Enter the id of the Employee"<<endl;;
			cin>>id;
		}
		void getDara(){
			cout<<"The id of the employee is "<<id<<endl;
		}
};
int Employee :: count; //This tells that with each object space for count sholud not be used again.

int main()
{
	Employee vedant,vanshay;
	vedant.setData();
	vanshay.setData();
	vedant.getDara();
	vanshay.getDara();
	
	return 0;
}
