#include<iostream>
using namespace std;

class Time{
	private:
		int hrs,mins;
	public:
		Time(int x,int y){
			hrs=x;
			mins=y;
		}
		operator int(){
			return (hrs*60+mins);
		}
};

int main()
{
//	This can only be done by operator functions as constructors does not support this.
	/*
	Conditions:
			1. Must be a class member
			2. Does not specify the return value
			3. Should not have any argument
	*/
	int h,m,duration;
	cout<<"Enter the hours and minutes "<<endl;
	cin>>h>>m;
	Time t(h,m);
	duration=t;
	duration=t.operator int();
	cout<<"The total duration is "<<duration<<endl;
	
	return 0;
}
