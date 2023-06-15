#include<iostream>
using namespace std;

class Time{
	private:
		int hrs,mins;
	public:
		Time(int h,int m){
			hrs=h;
			mins=m;
		}
		int get_Minutes(){
			int total_min=(60*hrs+mins);
			return total_min;
		}
		void display(){
			cout<<"Hours= "<<hrs<<endl;
			cout<<"Minutes= "<<mins<<endl;
		}
};

class Minute{
	private:
		int min;
	public:
		Minute(){
			min=0;
		}
		void operator=(Time T){
			min=T.get_Minutes();
		}
		void display(){
			cout<<"Total Minutes are "<<min<<endl;
		}
};

int main()
{
	Time t1(5,30);
	t1.display();
	Minute m1;
	m1.operator=(t1);
	m1.display();
	
	return 0;
}

