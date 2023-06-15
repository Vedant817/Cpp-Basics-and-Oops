#include<iostream>
using namespace std;

namespace first_space
{
  void func()
  {
     cout << "Inside first_space" << endl;
  }
  // second name space
  namespace second_space
  {
     void func()
     {
        cout << "Inside second_space" << endl;
     }
  }
}
using namespace first_space::second_space;

int main()
{
	/*
		Nested Namespace can be accessed by using the scope resolution operator.
	*/
	func();
	
	return 0;
}

