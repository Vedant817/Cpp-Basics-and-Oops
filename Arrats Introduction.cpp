/* Array is a data structure which stores a collection of items which are homogeneous.
It is a contigeous Memory.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int array[5];
	int array1[]={1,5,2,31,8,5,6,7};
	cout<<array1[1]<<endl;
	cout<<sizeof(array1)<<endl;
	cout<<sizeof(array1)/sizeof(array1[0])<<endl;   //Prints the length of the array.
	int array2[5];
	cout<<array2[0]<<endl;
	cout<<array2[1]<<endl;
	cout<<array2[2]<<endl;  //These all will print the garbage values.
	cout<<array2[3]<<endl;
	cout<<array2[4]<<endl;
	
	return 0;
}
