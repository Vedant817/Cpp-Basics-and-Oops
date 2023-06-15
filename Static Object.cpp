#include<iostream>
using namespace std;

class Test{
	public:
		Test(){cout<<"In constructor"<<endl;}
    	~Test(){ cout<<"In destructor"<<endl;}
}; 
void myfunc(){
	static Test obj;
	}
int main()
{
	cout << "Start main()"<<endl;
	myfunc();
	cout << "End main()"<<endl;

	return 0;
	/*
	Output:
			Start main()
		In constructor
		End main()
		In destructor
		
		Static Object does not destroys easily. In case of Normal object the output would have been like:
		In destructor
		End main()
	*/
}
