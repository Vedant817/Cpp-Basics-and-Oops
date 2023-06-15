#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
//	Function Object is a function wrapped in the class,So that it can just act like a class.
	int arr[]={5,4,6,77,2,45};
	sort(arr,arr+6,greater<int>());//Decending Order if we pass the third function object argument.
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

