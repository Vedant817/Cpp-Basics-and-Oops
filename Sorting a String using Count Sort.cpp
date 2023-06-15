//Sorting a given String
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string countSort(string str){
	vector<int>freq(26,0);
	
	//adding frequency of every character
	for(int i=0;i<str.length();i++){
		int index=str[i]-'a';
		freq[index]++;
	}
	
	//creating a sorted string
	int j=0;
	for(int i=0;i<26;i++){
		while(freq[i]--){
			str[j]=i+'a';
			j++;
		}
	}
	return str;
}

int main()
{
	//count Sort:Making a frequency array which count the number of particular element and stores the 
	//the frequency of the element at that value index of the frequency array.
	string str;
	cin>>str;
	
//	countsort(str);
	cout<<"The Sorted string is "<<countSort(str)<<endl;
//	timecomplexity=O(length of string)
//	spacecomplexity=O(26)
	
	return 0;
}
