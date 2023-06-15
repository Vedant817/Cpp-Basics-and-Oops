//Counting number of pairs giving a particular sum.
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	int array[5]={3,1,5,3,3};
	int x;
	cin>>x;
	int count=0;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(array[i]+array[j]==x){
				count++;
			}
		}
	}
	cout<<count<<endl;
	
	return 0;
}
