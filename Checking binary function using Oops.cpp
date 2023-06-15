#include<iostream>
using namespace std;

class binary{
	string s;
	public:
		void(read);
		void chk_bin(void);
		void ones(void);
};

void binary :: read(void){
	cout<<"Enter a binary";
	cin>>s;
}
void binary :: chk_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<"Incorrect binary format"<<endl;
			exit(0);
		}
	}
}

void binary ones(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='1'){
			s.at='0';
		}
		else{
			s.at='1';
		}
	}
}

int main()
{
	binary b;
	b.read();
	b.chk_bin();
	b.ones()
	return 0;
}
