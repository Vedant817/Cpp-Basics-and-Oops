/*
	Scope is the part of the program from where variable is accessible.
	In the same scope two variables with the same name even with different data types is not valid.
	Scope of a variable is valid in the area where it has been defined.
*/
#include<iostream>
#include<cmath>
using namespace std;
int apple=5;   //Here integer apple is globally defined. If in any function we define integer apple with some other value then the value inside the function will dominate as compared to the globally defined value.
int main()
{
	int apple=10;
	cout<<apple<<endl;
	apple++;
	cout<<apple<<endl;
	//If we want to access the global variable in the function then we can use the scope resolution operator i.e. ::
	cout<< ::apple<<endl;
	
	return 0;
}
