//An Array contains both positive and negative entities. We need to square them and arrange them in increasing order.
//abs() is an inbuilt function to find the absolute value.
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v;
	vector<int>ans;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	int left_ptr=0;
	int right_ptr=1;
	
	while(left_ptr<right_ptr){
		if(abs(v[left_ptr])<abs(v[right_ptr])){
			ans.push_back(v[right_ptr]*v[right_ptr]);
			right_ptr--;
		}
		else{
			ans.push_back(v[left_ptr]*v[left_ptr]);
			left_ptr++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" "<<endl;
	}
	
	return 0;
}
