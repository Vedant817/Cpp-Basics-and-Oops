#include<iostream>
#include<cmath>
using namespace std;
int check_num(int *arr,int m){
	//int y=sizeof(arr)/sizeof(arr[0]);
	static int i=0;
	if(arr[i]==m){
		cout<<"The number exits in the array at "<<i<<"th index of the array."<<endl;
	}
	else if(i<8){
		i++;
		check_num(arr,m);
	}
	else{
		cout<<"Number does not exist in the array."<<endl;
	}
}
int main()
{
	int arr[8]={4,12,54,14,3,8,6,1};
	int n;
	cout<<"Enter the Number to be checked: ";
	cin>>n;
	check_num(arr,n);
	
	return 0;
}
