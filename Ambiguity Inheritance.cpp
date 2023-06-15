#include<iostream>
using namespace std;

class Bse1{
	public:
		void data(){
			cout<<"Hello!"<<endl;
		}
};
class Bse2{
	public:
		void data(){
			cout<<"World"<<endl;
		}
};
class pprint:public Bse1,public Bse2{
	public:
		void hii(){
			cout<<"Hello Welcome to C++"<<endl;
		}
};

int main()
{
	Bse1 b1;
	Bse2 b2;
	pprint p;
	p.Bse2::data();
	p.Bse1::data();
	
	return 0;
}
