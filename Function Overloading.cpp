//Function Overloading
#include<iostream>
using namespace std;

void poly(int r,int s){
	cout<<"Function with Integer is called"<<endl;
}
void poly(double r,double s){
	cout<<"Function with float is called"<<endl;
}
int main()
{
	poly(7.8,8.6);
	
	return 0;
}
