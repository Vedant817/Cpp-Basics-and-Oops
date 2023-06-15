#include<iostream>
#include<string>
using namespace std;

int main()
{
	//Reverse Function: reverse(ptr1,ptr2)
	string str="hello";
	reverse(str.begin(),str.end());
	cout<<"The revsersed string is "<<str<<endl;
	
	//Substring Function:string_name.substr(position,length)
	cout<<"The substring is "<<str.substr(1,3)<<endl;
	
	return 0;
}
