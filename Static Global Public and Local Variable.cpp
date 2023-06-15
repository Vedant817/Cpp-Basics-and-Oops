#include<iostream>
using namespace std;

static int hello=55;
class Student{
	public:
		int hello=50;
};


int main()
{	static int hello=20;
	cout<<hello<<endl;
	cout<<::hello<<endl;
	Student s1;
	cout<<s1.hello<<endl;
	
	cout<<"\n";
	::hello++;
	hello++;
	
	cout<<hello<<endl;
	cout<<::hello<<endl;
	cout<<s1.hello<<endl;
	return 0;
}
