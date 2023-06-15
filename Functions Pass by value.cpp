#include<iostream>
#include<cmath>
using namespace std;
int add(int a, int b=1,int c=2){
	return (a+b+c);
}
int main()
{
	cout<<add(2)<<endl;  //Assigns the value to a.
	cout<<add(2,2)<<endl;  //Assigns the value to a,b.
	cout<<add(3,5,10)<<endl;  //Assigns the value to a,b and c.
	
	return 0;
}

