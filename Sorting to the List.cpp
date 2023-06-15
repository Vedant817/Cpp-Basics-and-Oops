#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int>l1(5);
	list<int>::iterator iter;
	iter=l1.begin();
	for(int i=0;i<l1.size();i++){
		cin>>*iter;
		iter++;
	}
	l1.sort();
	iter=l1.begin();
	for(int i=0;i<l1.size();i++){
		cout<<*iter<<" ";
		iter++;
	}
	cout<<endl;
	
	return 0;
}

