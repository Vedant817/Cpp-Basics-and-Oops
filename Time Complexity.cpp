//We need to offer default value in the function from right to left.

//Time and Space Complexity...
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int sum_in_range(int x, int y){
	//Experimental Analysis.
	int result=0;
	for(int i=x;i<=y;i++){
		result+=i;
	}
	return result;
}
int new_sum_in_range(int x, int y){
	//Asymptotic Analysis.
	int n=y-x+1;
	int d=1;
	int sum=n*(2*x+(n-1)*d)/2;
	
	return sum;
}

int main()
{
	cout<<sum_in_range(2,6)<<endl;
	cout<<new_sum_in_range(2,6)<<endl;
	
	return 0;
}
