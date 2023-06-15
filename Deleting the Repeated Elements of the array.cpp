#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int array[]={1,2,1,5,3,2};
	int count=0;
	for(int i=0; i<6;i++){
		for(int j=i+1;j<6;j++){
			if(array[i]==array[j]){
				for(int k=j;k<6;k++){
					array[j]=array[j+1];
				}
				count++;
			}
//			else{
//				count+=0;
//			}
		}
	}
//	int i;
//	while(array[i])
	for(int i=0;i<(6-count);i++){
		cout<<array[i]<<" ";
	}
	
	return 0;
}
