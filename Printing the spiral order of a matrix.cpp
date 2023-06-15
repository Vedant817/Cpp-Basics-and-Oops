//Spiral Order in 2D Arrays
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int m,n;
	cin>>n>>m;
	vector<vector<int>>matrix(n,vector<int>(m));
	
	for(int i=0;i,n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
		}
	}
	
	int left=0
	int right=matrix[0].size()-1;
	int top=0;
	int bottom=matrix.size()-1;
	int direction=0;
	
	while(){
		if(direction==0){
			for(int col=left;col<=right;col++){
				cout<<matrix[top][col]<<" ";
			}
			top++;
		}
		else if(direction==1){
			for(int row=top;row<=bottom;row++){
				cout<<matrix[row][right]<<" ";
			}
			right--;
		}
		else if(direction==2){
			for(int col=right;col>=left;col--){
				cout<<matrix[bottom][col]<<" ";
			}
			bottom--;
		}
		else{
			for(int row=bottom;row>=top;row--){
				cout<<matrix[row][left]<<" ";
			}
			left++;
		}
	}
	
	return 0;
}
