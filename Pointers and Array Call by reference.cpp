//Pointers and Arrays
#include<iostream>
using namespace std;

int SumOfElement(int* a, int size){
	size= sizeof(a)/sizeof(a[0]);
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int a[]={1,2,3,4,5};
	int size= sizeof(a)/sizeof(a[0]);
	int total=SumOfElement(a,size);
	cout<<total;
	
	return 0;
}
