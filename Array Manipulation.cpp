//Array Manipulation:Find the unique number in a given array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[]={1,2,5,2,1,6,9,4,9,31,5,6,4};
	int i,j;
	for(i=0;i<13;i++){
		for(j=i+1;j<13;j++){
			if(arr[i]!=arr[j]){
				cout<<arr[i]<<endl;
			}
		}
	}
	return 0;
}
