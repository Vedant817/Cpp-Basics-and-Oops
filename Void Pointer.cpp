//Void Pointer:These are special pointers which can point to any data type value.
#include<iostream>
using namespace std;

int main()
{
	float f=10.2;
	int x=10;
//	int *ptr=&f;
//	cout<<ptr<<endl; //Thsi will give the run time error because integer pointer can never point to the floating variable.
    void *ptr=&x;
//    cout<<*ptr<<endl; //Void pointers can't be derefrenced directly.
	int *new_ptr=(int *)ptr;
	cout<<new_ptr<<" "<<*new_ptr;
	return 0;
}
