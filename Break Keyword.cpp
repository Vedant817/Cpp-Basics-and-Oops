//Print the first  multiple of 5 which is also a multiple of 7.
#include<iostream>
using namespace std;

int main()
{
	int i=5;
	while(true){   // Here we have written true this means that this loop will always keep executing.
		if(i%7==0){
			cout<<i<<endl;
			break;
		}
		i+=5;
	}
	
	return 0;
}
