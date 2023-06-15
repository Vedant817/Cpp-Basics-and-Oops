#include<iostream>
#include<cmath>
using namespace std;

int count =0;
class Num{
	public:
		Num(){
			count++;
			cout<<"This is the tie when constructor is called "<<count<<endl;
		}
		
		~Num(){
			cout<<"This sis the when destrcutor is called "<<count<<endl;
			count--;
		}
};

int main()
{
	//Destructors never takes an argument nor returns a value.
	cout<<"We are inside a main function."<<endl;
	
	Num n1{
		cout<<"Creating two more objects"<<endl;
		Num n2,n3;
		cout<<"Exiting the block"<<endl;
	}
	cout<<"Back to Main"<<endl;
	return 0;
}
