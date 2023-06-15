// () is just used to initialise the parameters only
#include<iostream>
using namespace std;
class Base{
  private:
        int a,b;
  public:
        Base(int x,int y){
          a=x;
          b=y;
        }
        Base operator+(Base obj){
          Base tempp(0,0);
          tempp.a=a+obj.a;
          tempp.b=b+obj.b;
          return tempp;
        }
        Base operator()(int x,int y){
          a=x;
          b=y;
          return *this;
        }
        void display(){
          cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
        }
};
int main()
{
  Base b1(5,6);
  Base b2(5,10);
  Base b3(0,0);
  b3=b1+b2;
  b1(6,5);
  b2(8,5);
  b3=b1+b2;
  b3.display();

  return 0;
}
