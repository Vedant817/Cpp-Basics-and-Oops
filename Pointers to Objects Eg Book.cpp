#include<iostream>
using namespace std;

class item{
	private:
		int code;
		float price;
	public:
		void getdata(int a,float b){
			code=a;
			price=b;
		}
		void show(){
			cout<<"Code is "<<code<<endl;
			cout<<"Price is "<<price<<endl;
		}
};
const int size=2;

int main()
{
	int *ptr=new item[size];
	int *d=ptr;
	int x,i,y;
	
	for(i=0;i<size;i++){
		cout<<"Enter the code and price"<<endl;
		cin>>x>>y;
		ptr->getdata(x,y);
		ptr++;
	}
	
	for(i=0;i<size;i++){
		cout<<"Code and Price are "<<endl;
		ptr->show();
	}
	
	return 0;
}
