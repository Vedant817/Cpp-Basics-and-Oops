#include<iostream>
// bits/stdc++ is the library that includes all the standard libraries of C++ available.
using namespace  std;

class Test
{
private:
   int x;
public:
   void setX (int x)
   {
       // The 'this' pointer is used to retrieve the object's x
       // hidden by the local variable 'x'
       this->x = x;
   }
   void print() { cout << "x = " << x << endl; }
};

int main()
{
	/*
	The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls
	and is available as a local variable within the body of all nonstatic functions. ‘this’ pointer
	is not available in static member functions as static member functions can be called without any object.
	*/
	Test obj;
   int x = 20;
   obj.setX(x);
   obj.print();
	
	return 0;
}
