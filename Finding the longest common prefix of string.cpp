#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin>>str1>>str2;
	
	int i=0,size=0;
	while(str1[i]==str2[i]){
		size=i;
		i++;
	}
	cout<<"The longest commen prefix string is "<<endl;
	for(int i=0;i<=size;i++){
		cout<<str1[i];
	}
	cout<<endl;
	
	return 0;
}
