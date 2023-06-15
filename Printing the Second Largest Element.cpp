#include<iostream>
#include<cmath>
using namespace std;

int largestelementIndex(int array[], int size){
	int max=INT_MIN;
	int maxindex=-1;
	for(int i=0;i<size;i++){
		if(array[i]>max){
			max=array[i];
			maxindex=i;
		}
	}
}
int main()
{
	int array[]={2,3,5,7,6,1,7};
	int n=7;
	int indexoflargest=largestelementIndex(array,7);
	
	//Code for removing a number and finding the second largest element.
	//array[indexoflargest]=-1;
	int largest=array[indexoflargest];
	for(int i=0;i<n;i++){
		if(array[i]==largest){
			array[i]=-1;
		}
	}
	int indexofsecomdlargest=largestelementIndex(array,7);
	cout<<array[indexofsecomdlargest]<<endl;
	
	return 0;
}

