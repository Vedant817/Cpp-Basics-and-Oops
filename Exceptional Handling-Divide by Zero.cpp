#include<iostream>
#include<string>
using namespace std;


int divide(int x,int y){
	if(y==0){
		throw "Can't be performed because divisor is zero.";
	}
	else{
		return (x/y);
	}
}

int main()
{
	int ans;
	try{
		ans=divide(7,0);
	}catch(const char* Error){
		cout<<"The Error while performing is "<<Error<<endl;
	}
	
	return 0;
}

