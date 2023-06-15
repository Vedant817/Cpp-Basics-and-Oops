#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isIsomorphic(string s1,string s2){
	vector<int>v1(120,-1);
	vector<int>v2(128,-1);
	
	if(s1.size()!=s2.size()){
		return false;
	}
	
	for(int i=0;i<s1.size();i++){
		if(v1[s1[i]] != v2[s2[i]]){
			return false;
		}
		v1[s1[i]]=v2[s2[i]]=i;//storing string position in vector for character at index i
	}
	
	return true;
}

int main()
{
//	when in two strings there is one to one mapping
//	Eg: egg and add...Can be done by making the frequency array and storing then using the unique value
	string str1;
	string str2;
	cin>>str1>>str2;
	
	if(isIsomorphic(str1,str2)){
		cout<<"The two strings are isomorphic"<<endl;
	}
	else{
		cout<<"The strings are not isomorphic"<<endl;
	}
	
	return 0;
}
