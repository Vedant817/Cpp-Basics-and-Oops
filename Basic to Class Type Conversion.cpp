#include<iostream>
using namespace std;

class Time{
	private:
		int hrs;
		int mins;
	public:
		Time(){
		}
		Time(int t){
			hrs=t/60;
			mins=t%60;
		}
		void display(){
			cout<<"Time is "<<hrs<<" hours and "<<mins<<" minutes. \n";
		}
		Time operator=(int t){
			hrs=t/60;
			mins=t%60;
		}
};

int main()
{
//	Using the Constructor Method
	int duration;
	cout<<"Enter the Duration"<<endl;
	cin>>duration;
	Time t1=duration;
	t1.display();
	
	cout<<"Case Two"<<endl;
	Time t2(180);
	t2.display();
	
	cout<<"Case Three"<<endl;
	int duration2;
	cout<<"Enter the value of Duration 2"<<endl;
	cin>>duration2;
	Time t3;
	t3.operator=(duration2);
	t3.display();
	
	return 0;
}
