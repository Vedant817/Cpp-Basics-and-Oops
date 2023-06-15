//Merging Two arrays into a single array and elements should be sorted...
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int arr1[3]={1,3,5};
	int arr2[3]={2,4,6};
	int new_arr[6];
	int j=0,k=0;
	for(int i=0;i<6;i++){
		if(arr1[j]<arr2[k]){
			new_arr[i]=arr1[j];
			j++;
		}
		else{
			new_arr[i]=arr2[k];
			k++;
		}
	}
	for(int i=0;i<6;i++){
		cout<<new_arr[i]<<" ";
	}
	
	return 0;
}
/*
while(i<m && j<n){
result[k]=arr1[i];
k++;
i++;}
else{result[k]=arr2[j];
k++;
j++;}

while(i<m){
result[k]=arr1[i];
i++;
k++;}
while(j<n){
result[k]=arr2[j];
k++;
j++}
*/
