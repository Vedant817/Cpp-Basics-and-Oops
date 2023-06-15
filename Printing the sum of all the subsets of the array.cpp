//Given an array of integers,print sumd of all subsets in it. Output sums can 
//be printed in any order.
#include<iostream>
#include<cmath>
using namespace std;
int print_subset_sum(int *arr,int m){
	static int sum=0;
	//cout<<sum<<" ";
	static int subset=1;
	if(subset<=m){
		cout<<arr[subset-1]<<" ";
		subset++;
		print_subset_sum(arr,m);
	}
	else if(subset==m+1){
		static int k=0,l=k+1;
		if(k<m && l<m){
			int _sum=arr[k]+arr[l];
			l++;
			cout<<_sum<<" ";
			print_subset_sum(arr,m);
		}
		else if(l==m && k!=m){
			k++;
			l=k+1;
			print_subset_sum(arr,m);
		}
		else{
			subset++;
			print_subset_sum(arr,m);
		};
	}
	else if(subset==m+2){
		for(int i=0;i<m;i++){
			sum=sum+arr[i];
		}
		cout<<sum<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the number of Elements of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"0 ";
	print_subset_sum(arr,n);
	
	return 0;
}
