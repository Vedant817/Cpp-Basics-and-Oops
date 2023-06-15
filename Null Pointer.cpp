//Null Pointer: If we want to have a pointer variable,which is just declared but will get address later to store.
#include<iostream>
using namespace std;

int main()
{
	int *ptr=NULL;
	int *ptr1=NULL; //Both pointers may point to same memory allocation.
	int *ptr2=0;
	int *ptr3='\0';// All the above declaration points to Null pointer.
	cout<<ptr<<" "<<*ptr<<endl;
	cout<<ptr1<<endl;
	
	return 0;
}
