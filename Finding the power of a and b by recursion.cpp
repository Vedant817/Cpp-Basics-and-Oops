#include<iostream>
using namespace std;

int power(int a,int b){
	int ans=1;
	int i=1;
	while(b!=0){
		ans=a*power(a,b-1);
//		power(a,(b-1));
	}
	return ans;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int result;
	result=power(a,b);
	cout<<result<<endl;
	
	return 0;
}
