#include<iostream>
using namespace std;

typedef void (*FunPtr)(int,int);
void Add(int i,int j){
	cout<<"The addition of numbers is "<<i+j<<endl;
}
void Subtract(int i,int j){
	cout<<"The Subtraction of two numbers is "<<i-j<<endl;
}

int main()
{
	/*
		These are used for dynamic binding.Pointer to functions is also known as callback function.
		Function is selected during the run time. Function can be passed as an argument to another function using pointer to function.
	*/
	FunPtr ptr;
	ptr=&Add;
	ptr(1,2);
	ptr=&Subtract;
	ptr(3,2);
	
	return 0;
}
