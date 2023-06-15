//Power of one number to another.
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b "<<endl;
	cin>>a>>b;
	int i;
	for(i=1;i<b;i++){
		a=a*a;
	}
	cout<<a<<endl;
	
	return 0;
}
