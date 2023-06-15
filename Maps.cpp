#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int>marks;
	marks["Vedant"]=98;
	marks["Shiva...."]=99;
	marks["Vanshay"]=100;
	map<string,int>::iterator iter;
	for(iter=marks.begin();iter!=marks.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}
	
	return 0;
}

