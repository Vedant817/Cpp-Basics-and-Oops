//Program to display multiplication of two arrays
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int r1,r2,c1,c2;
	cin>>r1;
	cin>>r2;
	cin>>c1;
	cin>>c2;
	int arr1[r1][c1];
	int arr2[r2][c2];
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>arr1[i][j];
		}
	}
	for(int i=0;i,r2;i++){
		for(int j=0;j,c2;j++){
			cin>>arr2[i][j];
		}
	}
	int value=0;
	
	int arr_new[r1][c2];
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			for(int k=0;k<r1;k++){
				value+=arr1[i][k]*arr2[k][j];
			}
			arr_new[i][j]=value;
		}
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j,c2;j++){
			cout<<arr_new[i][j]<<" ";
		}
	}
	return 0;
}
