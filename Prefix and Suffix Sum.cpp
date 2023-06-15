//	Checking if an array can be partitioned in two subarrays with equal sum
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	int n;
	vector<int>v;
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	
	int totalsum=0;
	for(int i=0;i<n;i++){
		totalsum=totalsum+v[i];
	}
	cout<<"Total Sum is:"<<totalsum<<endl;
	
	int prefix_sum=0;
	for(int i=0;i<n;i++){
		prefix_sum+=v[i];
		int suffix_sum=totalsum-prefix_sum;
		
		if(prefix_sum==suffix_sum){
			cout<<"True"<<endl;
		}
	}
	
	return 0;
}
