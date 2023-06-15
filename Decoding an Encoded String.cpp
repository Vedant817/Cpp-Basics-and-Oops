#include<iostream>
#include<string>
#include<vector>
using namespace std;

string decodedString(string s){
	string result ="";
	
	for(int i=0;i<s.length();i++){
		if(s[i]!=']'){
			result.push_back(s[i]);
		}
		else{
			//extract str from result
			string str="";
			while(!result.empty() && result.back()!='['){
				str.push_back(result.back();
				result.pop_back();
			}
			//reverse str
			reverse(str.begin(),str.end());
			//removing the last char from the result
			result.pop_back();
			//extract the num from the string
			string num="";
			while(!result.empty() && result.back()>='0'&& result.back()<='9'){
				num.push_back(result.back());
				result.pop_back();
			}
			//reverse the num
			reverse(num.begin(),num.end());
			//converting the string to int
			int int_num =stoi(num);
			//inserting str in result int_num times
			while(int_num){
				result+=str;
				int_num--;
			}
		}
	}
	return s;
}

int main()
{
//	Occurrence(less than 1000) of the string is given at the starting of the string and each string is enclosed by square bracket.
//	s=1[b]->b
//	s=3[b2[ca]]->bcacabcacabcaca
	string str;
	cin>>str;
	
	cout<<"The decoded string is "<<decodedString(str)<<endl;
//	Time and Space Complexity is both equal to O(N) where N is the length of the decoded string
	return 0;
}
