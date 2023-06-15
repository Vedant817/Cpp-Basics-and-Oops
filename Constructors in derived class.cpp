#include<iostream>
using namespace std;

class alpha{
	private:
		int x;
	public:
		alpha(int i){
			x=i;
			cout<<"Alpha Initialization. \n";
		}
		void show_x(){
			cout<<"The value of x is "<<x<<endl;
		}
};
class beta{
	private:
		int y;
	public:
		beta(float j){
			y=j;
			cout<<"Beta Initialization. \n";
		}
		void show_y(){
			cout<<"The value of y is "<<y<<endl;
		}
};
class gamma:public beta,public alpha{
	private:
		int m,n;
	public:
		gamma(int a,float b,int c,int d):alpha(a),beta(b){
			m=c;
			n=d;
			cout<<"Gamma Initialised. \n";
		}
		void show_MN(){
			cout<<"The value of m and are "<<m<<" and "<<n<<endl;
		}
};

int main()
{
	//As long as no base class constructor takes an argument, the derived class need not have a constructor function.
	/*
		Syntax:
				Derived-Constructor(Arguments):Call to Base Constructors
	*/
	gamma g(5,10.75,20,30);
	cout<<endl;
	g.show_x();
	g.show_y();
	g.show_MN();
	
	return 0;
}
