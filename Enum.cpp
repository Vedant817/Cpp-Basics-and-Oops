#include<iostream>
using namespace std;


int main()
{
	enum Meal{breakfast, lunch, dinner};
	Meal m1=lunch;
	cout<<m1<<endl<<endl; //1
	cout<<breakfast<<endl; //0
	cout<<lunch<<endl; //1
	cout<<dinner<<endl; //2
	
	return 0;
}
