#include<iostream>
using namespace std;

class CalCube{
	private:
		int a;
		int ans;
	public:
		void get(){
			cin>>a;
		}
		int cube();
		void display();
};
inline int CalCube::cube(){
	ans = a*a*a;
	return ans;
}
inline void CalCube::display(){
	cout<<cube()<<endl;
}

int main()
{
	CalCube c1,c2;
	c1.get();
	c1.display();
	c2.get();
	c2.display();
	
	return 0;
}
