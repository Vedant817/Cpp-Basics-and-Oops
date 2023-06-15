/*Rotating an array...
1 2 3 4 5   Rotated by 1 Step
5 1 2 3 4
*/
#include<iostream>
using namespace std;

int main()
{
	int array[]={1,2,3,4,5};
	cout<<"Enter the number by which array need to be rotated"<<endl;
	int k;
	cin>>k;
	int newarr[5];
	k=k%5;
	int j=0;
	//Inserting Last k elements into the new array.
	for(int i=5-k;i<5;i++){
		newarr[j++]=array[i];
	}
	//Inseerting first n-k elements into the new array.
	for(int i=0;i<=k;i++){
		newarr[j++]=array[i];
	}
	cout<<"New Array is:"<<endl;
	for(int i=0;i<5;i++){
		cout<<newarr[i]<<" ";
	}
	
	return 0;
}
