//Given a string,we have to find out all its subsequences of it.
#include<iostream>
#include<cmath>
using namespace std;

void subsequence(char str[],int n){
	static int a=1;
	//int total = pow(2,n-1)-1;
	if(a<n){
		cout<<str[a-1]<<" ";
		a++;
		subsequence(str,n);
	}
	if(a==n){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n-1;j++){
				cout<<str[i]<<str[j]<<" ";
			}
		}
		a++;
		subsequence(str,n);
	}
	
	if(a==n+1){
		cout<<str<<endl;
		a++;
	}
}
int main()
{
	char str[]={"abc"};
	int n =sizeof(str)/sizeof(str[0]);
//	cout<<n;
	subsequence(str,n);
	
	return 0;
}
