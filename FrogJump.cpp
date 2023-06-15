//Calculate the minimum cost of the jumps...
#include<iostream>
#include<cmath>
using namespace std;

int  cost(int *h,int n,int i){
	if(i==n-1) return 0;
	if(i==n-2) return cost(h,n,i+1)+abs(h[i]-h[i+1]);
	
	return min(cost(h,n,i+1)+abs(h[i]-h[i+1]), cost(h,n,i+2)+abs(h[i]-h[i+2]));
}

int main()
{
	int arr[]={10,30,40,20};
	int n=4;
	cout<<cost(arr,n,0)<<endl;
	
	return 0;
}
