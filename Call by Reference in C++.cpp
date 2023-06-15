#include<iostream>
#include<cmath>
using namespace std;
void changeValue(int &z){
	z=100;
}
int main()
{
	int p=5;
	int &q=p;
	q++;
	cout<<p<<endl; //Shows both p and q points at the same value.
	cout<<&p<<endl;
	cout<<&q<<endl;
	changeValue(p);
	cout<<p<<endl;
	return 0;
}
