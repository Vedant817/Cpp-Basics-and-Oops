//Sorting an array consisting of only 0 and 1...
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
	int count=0;
	int array[]={0,0,0,1,1,0,1,1,0,0,1};
	for(int i=0;i<11;i++){
		if(array[i]==0){
			++count;
		}
	}
	cout<<"Total Number of Zeros are:"<<count<<endl;
	for(int i=0;i<count;i++){
		array[i]=0;
	}
	for(int i=count;i<11;i++){
		array[i]=1;
	}
	
	for(int i=0;i<11;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
