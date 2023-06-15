//Advanced Pointers and Arrays.
#include<iostream>
using namespace std;

int main()
{
	int arr[3]={15,12,16};
	int *ptr=arr[0];
	//Name of the array act as the pointer of the zeroth index of the array.
	cout<<ptr<<" "<<arr<<endl;
	cout<<*ptr<<" "<<*arr<<endl;
	
	return 0;
}
