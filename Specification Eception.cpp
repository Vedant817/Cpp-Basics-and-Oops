#include<iostream>
using namespace std;

class demo{
};
class base{
};
void translate(int a)throw(demo,base){
	if(a==0) throw demo();
	if(a==1) throw base();
	else throw 10;
}

int main()
{
//	In this type of exception: Exceptions which will be thrown are previously defined and if any other exception will be thrown then default catch will be called.
	try{
		translate(7);
	}
	catch(const int x){
		cout<<"The value passed is "<<x<<endl;
	}
	catch(demo d){
		cout<<"Demo"<<endl;
	}
	catch(base b){
		cout<<"Base"<<endl;
	}
	catch(...){
		cout<<"Default Exception"<<endl;
	}
	
	return 0;
}

