#include<iostream>
#include<string>
using namespace std;

int main()
{
	char name[20]="Vedant ";
	char surname[10]="Mahajan";
	strcat(name,surname);
	cout<<"The Concatenated String is "<<name<<endl;
	
	return 0;
}
