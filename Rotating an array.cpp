// Rotating a matrix in clockwise 90 degrees
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	int array[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>array[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][j];
		}
		cout<<endl;
	}
	//We need to first take the transpose of the matrix and then need to interchange column 1 and column 2.
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<i;j++){
			array[i][j]=array[i][j]+array[j][i];
			array[j][i]=array[i][j]-array[j][i];
			array[i][j]=array[i][j]-array[j][i];
		}
	}
	for(int i=0;i<3;i++){
		array[i][1]=array[i][1]+array[i][3];
		array[i][3]=array[i][1]-array[i][3];
		array[i][1]=array[i][1]-array[i][3];
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
