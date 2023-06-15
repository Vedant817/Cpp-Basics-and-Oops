/*
Declaration of a function:
return_type function_name(parameter1,parameter2.....)
{statement;}
*/
#include<iostream>
using namespace std;
/*
1. Function must be defined before main function.
2. We can make various function with the same name by just changing the parameter or by changing the return type of the function which will differentiate between the both functions of same name.
*/
int add(int a,int b){
	int sum=a+b;
	return sum;
}
int main()
{
	int x=5,y=4;
	cout<<add(x,y)<<endl;
	
	return 0;
}
