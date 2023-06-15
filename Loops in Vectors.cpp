#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>V;
	
	int i;
	for(i=0;i<5;i++){
		int element;
		cin>>element;
		V.push_back(element);
	}
	for(i=0;i<5;i++){
		cout<<V[i]<<" ";
	}
	cout<<endl;
	V.insert(V.begin()+3,10);
	cout<<V[3]<<endl;
	return 0;
}
