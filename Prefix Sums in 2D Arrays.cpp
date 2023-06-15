//Given a matrix of any dimension and two coordinates are inputed. Return the sum of rectangle from the two inputed.
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int m,n;
	int array[m][n];
	cin>>m>>n;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	int l1,l2,r1,r2;
	cin>>l1>>l2>>r1>>r2;
	int sum=0;
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			if(array[i][j]==array[l1][r1] || array[l1][r2] || array[l2][r1] || array[l2][r2]){
//				sum=sum+array[i][j];
//			}
//		}
//	}
	for(int i=l1;i<=l2;i++){
		for(int j=r1;j<=r2;j++){
			cout<<array[i][j];
		}
		cout<<endl;
	}
	cout<<"The Required Sum is"<<sum<<endl;
	
	return 0;
}
