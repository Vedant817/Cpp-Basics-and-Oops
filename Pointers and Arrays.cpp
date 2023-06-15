//Pointers and Arrays
#include<iostream>
using namespace std;

int main()
{
	int array[2]={1,21};
	int *ptr=&array[0];
	cout<<ptr<<" "<<*ptr<<endl;
	cout<<(ptr+1)<<" "<<*(ptr+1)<<endl;
	
	cout<<*ptr++<<endl; //Here first ptr is printed and then incremented.
	cout<<*ptr<<endl;
	
	return 0;
}
