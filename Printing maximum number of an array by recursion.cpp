//Finding maximum number of an array using recursion.
#include<iostream>
using namespace std;
int max(int *arr,int n,int index){
	static int max_num;
	if(index==n){
		return max_num;
	}
	if(max_num<arr[index]){
		max_num=arr[index];
	}
	max(arr,n,index+1);
}

int main()
{
	int array[]={1,2,13,4,5};
	int size=5;
	cout<<max(array,size,0);
	
	return 0;
}
