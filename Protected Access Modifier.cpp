#include<iostream>
using namespace std;

class Base{
	protected: // Protected is just like private. The only difference between them is that it can be inherited		int a;
		int a;
	private:
		int b;
};
//In Public Derivations protected members remain protected.
class Derived:protected Base{
	
};

int main()
{
	Base b;
	Derived d;
//Here both b.a and d.a both will won't work because in b a is private and in d a is protected.
	
	return 0;
}
