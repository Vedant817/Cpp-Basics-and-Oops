#include<iostream>
#include<vector>
using namespace std;

template <class T>
class vector{
	public:
		T *arr;
		int size;
		vector(int m){
			size=m;
			arr=new T[size];
		}
		T dotProduct(vector &v){
			T d=0;
			for(int i=0;i<size;i++){
				d+=this->arr[i]*arr[i];
			}
			return d;
		}
};

int main()
{
	vector v1(3);
	v1.arr[0]=3;
	v1.arr[1]=2;
	v1.arr[2]=1;
	vector v2(3);
	v2.arr[0]=30;
	v2.arr[1]=36;
	v2.arr[2]=31;
	cout<<"The value of Dot Product is "<<<v1.dotProduct(v2)<<endl;
	
//	Using the Templates:
	vector<int>v1(3);
	v1.arr[0]=3;
	v1.arr[1]=2;
	v1.arr[2]=1;
	vector<float>v2(3);
	v2.arr[0]=3.6;
	v2.arr[1]=0.6;
	v2.arr[2]=4.5;
	cout<<"The value of Dot Product is "<<<v1.dotProduct(v2)<<endl;
	
	return 0;
}

