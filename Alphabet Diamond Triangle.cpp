//Alphabet Diamond Pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int line=1,column=1,space=0;
	int j;
	for(line=1;line<=n;line++){
		for(space=0;space<n-line;space++){
			cout<<" ";
		}
		int no_of_character=2*line-1;
		int j;
		for(j=0;j<no_of_character;j++){
			char ch=(char)('A'+j);
			cout<<ch;
		}
		cout<<endl;   //Logic for lower triangle is 2(2*i-1)-1 .
	}
	for(line=n+1;line<=2*n-1;line++){
		int no_of_spaces=(line-n);
		int k;
		for(k=0;k<no_of_spaces;k++){
			cout<<" ";
		}
		int no_of_char=2*(2*n-line)-1;
		for(j=0;j<no_of_char;j++){
			char ch=(char)('A'+j);
			cout<<ch;
		}
		cout<<endl;
	}
	
	return 0;
}
