//Finding the sum of the digits of a  number by recursion.
#include<iostream>
#include<cmath>
using namespace std;
int sumdigits(int n){
	int sum=0;
	int a;
	while(n!=0){
	a=n%10;
	n=n/10;
	sum=sum+a;
	sumdigits(n);
	}
	return(sum);
}

int main()
{
	int n;
	cin>>n;
	int ans=sumdigits(n);
	cout<<ans<<endl;
	
	return 0;
}
