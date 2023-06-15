#include<iostream>
#include<vector>
using namespace std;

class demo{
	private:
		int a,b;
	public:
		demo(int a,int b){
			this->a=a;
			this->b;
		}
		void show(){
			cout<<"The value of the sum is "<<a+b<<endl;
		}
};

int main()
{
	vector<demo>d;
	for(int i=0;i<5;i++){
		d.push_back(demo(i+1,i+2));
	}
	for(int i=0;i<5;i++){
		d[i].show();
	}
	
	return 0;
}

