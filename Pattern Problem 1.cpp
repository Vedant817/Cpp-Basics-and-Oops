//Pattern Problem 1.
#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cin>>m;
	cin>>n;
	cout<<"Number of Rows are "<<m<<endl;
	cout<<"Number of Column are "<<n<<endl;
	
	int i,j;
	for(j=1;j<=m;j++){
		
	for(i=1;i<=n;i++){
		cout<<"*";
		}
	cout<<endl;
	}
	return 0;
}
