#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Size of the array is automatically managed.
	vector<int>v1;
	for(int i=0;i<4;i++){
		v1.push_back(i+1);
	}
	for(int i=0;i<4;i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	v1.pop_back();
	for(int i=0;i<4;i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	vector<int>::iterator iter=v1.begin();
	v1.insert(iter+2,6,500);//(position,non of copies,number)
	for(int i=0;i<10;i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	return 0;
}

