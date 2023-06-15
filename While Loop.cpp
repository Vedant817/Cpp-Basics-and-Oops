//Printing the Sum of n natural Numbers.
#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum=0;
	cin>>n;
	cout<<"The Number Entered by the user is "<<n<<endl;
	int i=0;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"Sum of the n natural numbers is "<<sum<<endl;
	
	return 0;
}
