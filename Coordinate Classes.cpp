#include<iostream>
using namespace std;
class Point{
	int a;
	int b;
	public:
		Point(int x,int y);
		void print_cood(){
			cout<<"X Co-ordinate of the number is:"<<a<<endl;
			cout<<"Y Co-ordinate of the number is:"<<b<<endl;
		}
};
Point::Point(int x,int y){
	a=x;
	b=y;
}

int main()
{
	Point A(4,6);
	A.print_cood();
	
	return 0;
}
