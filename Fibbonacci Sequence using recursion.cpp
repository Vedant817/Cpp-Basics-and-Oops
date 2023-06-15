//Fibbonacci Sequence Using Recursion...
#include<iostream>
#include<cmath>
using namespace std;

int fibbo(int n){
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	int ans=fibbo(n-1)+fibbo(n-2);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<fibbo(n)<<endl;
	
	return 0;
}

