#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	string name="Vedant";
	cout<<name.length()<<" "<<name.size()<<endl;//Faster:O(1)
	
	char new_name[10]="Vedant";
	cout<<strlen(new_name)<<endl;//Slow:O(n)
	
	return 0;
}
