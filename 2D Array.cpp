//Multidimentional Arrays
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int array[4][3];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cin>>array[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
