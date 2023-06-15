#include<iostream>
using namespace std;
class Distance{
  private:
        int feet;
  public:
        Distance(){
          feet=0;
        }
        Distance(int x){
          feet=x;
        }
        void display(){
          cout<<"The value of feet is "<<feet<<endl;
        }
        void operator-(){
          feet= -feet;
//          return Distance;
        }
};
int main()
{
  Distance d(5);
  -d;
  d.display();
}
