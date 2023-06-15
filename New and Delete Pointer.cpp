#include<iostream>
using namespace std;

int main()
{
	int *p=new int(40);
	cout<<"The value of address is "<<p<<endl;
	cout<<"The value of p is "<<*p<<endl;
	//Creating an Array using new pointer:
	int *arr=new int[3];
	arr[0]=7;
	arr[1]=50;
	arr[2]=100;
	
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
	//Delete Operator:
	delete[] arr;
	delete p;
		
	return 0;
}
