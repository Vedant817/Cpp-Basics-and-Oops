//Printing all numbers from 0 to 50 and skiping multiple of 3
#include<iostream>
using namespace std;

int main()
{
	int i;
	for(i=0;i<=50;i++){
		if(i%3==0){
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
