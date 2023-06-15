#include<iostream>
using namespace std;

class nUMBER{
	private:
		int num;
	public:
		void set_data(){
			cout<<"Enter the value of the number"<<endl;
			cin>>num;
		}
		int get_num(){
			return num;
		}
};
class square:public nUMBER{
	private:
		int squr;
	public:
		void get_square(){
			squr=get_num()*get_num();
			cout<<"The square of the number is "<<squr<<endl;
		}
};
class cube:public nUMBER{
	private:
		int cubee;
	public:
		void get_cube(){
			cubee=get_num()*get_num()*get_num();
			cout<<"The cube of the number is "<<cubee<<endl;
		}
};

int main()
{
	square s;
	s.set_data();
	s.get_square();
	
	cube c;
	c.set_data();
	c.get_cube();
	return 0;
}
