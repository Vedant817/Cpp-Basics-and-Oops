#include<iostream>
#include<list>
using namespace std;

int main()
{
//	Used when insertion and deletion is fast.
	list<int>l1;//List of length 0
	list<int>l2(7);//Empty List of size 7.
	list<int>l3(7,31);//List of size 7 containing all elements as 7
	for(int i=0;i<5;i++){
		l1.push_back(i+1);
	}
	list<int>::iterator iter;
	iter=l1.begin();
	for(int i=0;i<5;i++){
		cout<<*iter<<" ";
		iter++;
	}
	cout<<endl;
//	To remove a particular element we need to use remove function and argument will be the value to be removed.

	return 0;
}

