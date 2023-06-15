#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T>&v){
	cout<<"Display is called"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	vector<char>v1(4);
	vector<char>v2(v1);
	vector<int>v(6,3);//Size is 6 and all elements are equal to 3.
	display(v1);
	display(v2);
	display(v);
	
	return 0;
}

