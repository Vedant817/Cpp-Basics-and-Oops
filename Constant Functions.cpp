#include<iostream>
using namespace std;

class Demo
{
	private:
		int x;
	public:
		void set_data(int a){
			x=a;
		}

		int get_data()const{
			++x;//Error because constant function does not allows to update the value.
			return x;
		}

};

int main()
{
	/*
		Like member functions and member function arguments, the objects of a class can also be declared as const.
		An object declared as const cannot be modified and hence, can invoke only const member functions as these functions ensure not to modify the object. 
	*/
	
	Demo d;
	d.set_data(10);
	cout<<endl<<d.get_data();

	return 0;
}

