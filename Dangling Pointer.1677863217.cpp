//Danglin Pointer: It is a type of pointer that points to a memory location that does not exists.
#include<iostream>
using namespace std;

int main()
{
	int *ptr=NULL;
	{
		int x=10;
		ptr=&x;
	}
	cout<<ptr<<" "<<*ptr<<endl;
	
	return 0;
}
