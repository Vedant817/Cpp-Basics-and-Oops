#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
		int area;
	public:
		Rectangle(){
//			length=0;
//			breadth=0;
		}
		Rectangle(int x,int y){
			length=x;
			breadth=y;
		}
		Rectangle(int x){
			length=breadth=x;
		}
		void Area(){
			area=length*breadth;
		}
		void display(){
			cout<<"Area of the Rectangle is "<<area<<endl;
		}
		~Rectangle(){
			cout<<"Area of the Rectangle is Calculated"<<endl;
		}
//		~Rectangle(){
//			cout<<"This is Destructor"<<endl;
//		}
};

int main()
{
	Rectangle R1(5);
	R1.Area();
	R1.display();
//	Rectangle R2();
//	R2.Area();
//	R2.display();
	Rectangle R3(3,4);
	R3.Area();
	R3.display();
	
	return 0;
}
