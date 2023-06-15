//Pointers to Objects
#include<iostream>
using namespace std;

class Test{
	private:
		int i;
	public:
		Test(int a){
			i=a;
		}
		void show(){
			cout<<"The value of i is "<<i<<endl;
		}
};

int main()
{
	Test t(10);
	Test *p;
	p=&t;
	p->show();
	t.show();
	
	return 0;
}
