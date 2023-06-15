//Printing a hollow rectangular pattern.
#include<iostream>
using namespace std;

int main()
{
	int m,n,p;
	cin>>m;
	cin>>n;
	cout<<"The Number of rows are "<<m<<endl;
	cout<<"The Number of Column are "<<n<<endl;
	
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(i==1 || j==1 || i==m || j==n){
				cout<<"*";
			}
			else{
				cout<<"";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
