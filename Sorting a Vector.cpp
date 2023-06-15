//Shifting all the even elements at the end of the array..
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
	int left_ptr=0;
	int right_ptr=v.size()-1;
	while(left_ptr<right_ptr){
		if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
			v[left_ptr]=v[left_ptr]+v[right_ptr];
			v[right_ptr]=v[left_ptr]-v[right_ptr];
			v[left_ptr]=v[left_ptr]-v[right_ptr];
			left_ptr++;
			right_ptr--;
		}
		if(v[left_ptr]%2==1){
			left_ptr++;
		}
		if(v[right_ptr]%2==0){
			right_ptr--;
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}
