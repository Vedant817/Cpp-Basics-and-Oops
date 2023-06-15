//Sum=1-2+3-4+5-6+7......n
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number till where series is to be printed "<<endl;
	cin>>num;
	int i;
	int sum=0;
	for(i=1;i<=num;i++){
		if(i%2==0){
			sum+=i;
		}
		else{
			sum-=i;
		}
	}
	cout<<sum<<endl;
	
	return 0;
}
