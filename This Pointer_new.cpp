#include<iostream>
using namespace std;

class A{
	private:
		int a;
	public:
		A &set_data(int a){
			this->a=a;
			return *this;
		}
		void get_data(){
			cout<<"The value of a is "<<a<<endl;
		}
};

int main()
{
	//This represents the objects which is invoking the member function.
	A alpha;
	alpha.set_data(20);
	alpha.get_data();
	alpha.set_data(5).get_data();//For returning an object data-type of the function should be the name of the class.
	
	return 0;
}
