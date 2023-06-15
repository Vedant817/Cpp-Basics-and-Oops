#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
//	anagram: rearrange the letters of the word
//	Method 1: Applying the Sorting Algorithm and verifying both.
//	Method 2: Comparing the Frequency Array of both the strings.
	string str1;
	string str2;
	cin>>str1>>str2;
	int freq1[26];
	int freq2[26];
	for(int i=0;i<str1.length();i++){
		int index = str1[i]-'a';
		freq1[index]++;
	}
	
	for(int i=0;i<str2.length();i++){
		int index = str2[i]-'a';
		freq2[index]++;
	}
	if(freq1 == freq2){
		cout<<"True"<<endl;
	}
	else{
		return false;
	}
	
	
	return 0;
}
