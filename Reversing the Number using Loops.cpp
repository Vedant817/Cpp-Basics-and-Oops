#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int reverse=0;
	int a;
	while(num>0){
		a=num%10;
		reverse=reverse*10+a;
		num=num/10;
	}
	cout<<reverse;
	return 0;
}
