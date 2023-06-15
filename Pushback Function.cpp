#include<iostream>
#include<string>
using namespace std;

int main()
{
	//Pushback function is used to append the char at the last of the string
	string name="Vedan";
	char ch='t';
	name.push_back(ch);
	cout<<"The name is "<<name<<endl;
	
	return 0;
}
