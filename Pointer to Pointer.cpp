//Pointers to Pointers
#include<iostream>
using namespace std;

int main()
{
	int x=5;
	int *p=&x;
	int **q;
	q=&p; //Declaring a pointer to pointer.
	cout<<p<<" "<<*p<<endl; //Address of p and then the value of x
	cout<<q<<" "<<*q<<endl; //Address of q and then value of q is address of p
	cout<<q<<" "<<**q<<endl; //Address of q and the value of value is value of x
	
	return 0;
}
