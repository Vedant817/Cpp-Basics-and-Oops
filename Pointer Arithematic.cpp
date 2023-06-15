//Pointer Arithematic....
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x=20;
	int *ptr=&x;
	//Oncrement of a pointer value refers to shift in memory locaton that pointer is pointing to. Shift is dependent on size of the type of variable.
	cout<<ptr<<endl;;
	cout<<(ptr+1)<<endl;
	
	return 0;
}
