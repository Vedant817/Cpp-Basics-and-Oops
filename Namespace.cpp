#include<iostream>
using namespace std;

namespace first_space
{
  void func()
  {
     cout << "Inside first_space" << endl;
  }
}
 
// second name space
namespace second_space
{
  void func()
  {
     cout << "Inside second_space" << endl;
  }
}
using namespace first_space;
//using namespace second_space; ->Ambiguity

int main()
{
	/*
		-> Using namespace, you can define the space or context in which identifiers are defined i.e. variable,
		method, classes. In essence, a namespace defines a scope.
		-> A namespace is designed to overcome this difficulty and is used as additional information to differentiate
		similar functions, classes, variables etc. with the same name available in different libraries.
		-> 
	*/
	
	func();
	
	return 0;
}

