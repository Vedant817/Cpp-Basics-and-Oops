//Highest Common factor using recursion;
#include<iostream>
#include<cmath>
using namespace std;
int hcf(int num){
	static int i=1;
	static int factor;
	if(i>=num){
//		cout<<"Highest Common factor is:"<<factor<<endl;
		return factor;
	}
	if(num%i==0){
		factor=i;
	}
	i++;
	hcf(num);
}

int main()
{
	int num;
	cin>>num;
	int ans=hcf(num);
	cout<<ans<<endl;
	
	return 0;
}
