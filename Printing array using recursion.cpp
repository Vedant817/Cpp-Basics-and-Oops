//Printing elements of the array using recursion.
#include<iostream>
using namespace std;
int print(int *arr,int n,int index){
	if(index==n)return;
	cout<<arr[index]<<endl;
	print(arr,n,index+1);
}

int main()
{
	int array[]={1,2,3,4,5};
	int size=5;
	print(array,size,0);
	
	return 0;
}
