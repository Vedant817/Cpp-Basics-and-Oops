//Printing all numbers from 1 to n using recursion.
#include<iostream>
using namespace std;
int print_num(int num){
	static int i=1;
	if(i>num){
		return 0;
	}
	cout<<i<<endl;
	i++;
	print_num(num);
}

int main()
{
	int num;
	cin>>num;
	cout<<"The result is:"<<endl;
	print_num(num);
	
	return 0;
}
