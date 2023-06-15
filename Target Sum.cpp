// Total Number of pairs in the Array whose sum is equal to the given value of x.
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int arr[]={1,10,2,9,5,6,4,9,50,3};
	cout<<"Enter the value of x";
	
	int x;
	cin>>x;
	
	int i,j;
	int count=0;
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]+arr[j]==x){
				count+=1;
			}
		}
	}
	cout<<count<<endl;
	
	return 0;
}
