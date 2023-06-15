//Removing a particular character from the string by recursion.
#include<iostream>
//#include<string>
using namespace std;
string remove(char *str,int n,int index, char m){
	static char result[]="";
	if(index==n){
		cout<<result;
	}
	if(str[index]!='m'){
//		strcat(result,str[index]);
        result+str[index];
	}
	remove(str,n,index+1,m);
}

int main()
{
	char string[]="Vedant";
	int size=6;
	char remove_char;
	cin>>remove_char;
	remove(string,size,0,remove_char);
	
	return 0;
}
