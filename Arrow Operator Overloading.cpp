#include<iostream>
using namespace std;
class Base{
  public:
        int i;
        Base *operator->(){//this operator function must return a pointer.
          return this;
        }
};
int main()
{
 Base b;
  b.i=20;
  b->i=10;
  cout<<"The value of i of the Base class is "<<b.i<<endl;

  return 0;
}
