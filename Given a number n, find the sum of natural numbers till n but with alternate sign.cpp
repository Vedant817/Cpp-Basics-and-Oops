//Given a number n, find the sum of natural numbers till n but with alternate sign
#include<iostream>
#include<cmath>
using namespace std;
int print_alter(int num){
	static int i=1;
	static int a=1;
	if(i>abs(num)){
		return 0;
	}
	cout<<i*a<<endl;
	i++;
	a=a*(-1);
	print_alter(num);
}

int main()
{
	int num;
	cin>>num;
	cout<<"The result of the function is:"<<endl;
	print_alter(num);
	
	return 0;
}
