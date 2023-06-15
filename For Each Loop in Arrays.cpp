/*For Each Loop...
for(datatype variable:array){}   variable=ele
This is used to print the elements of the loop.
*/
#include<iostream>
using namespace std;
int main()
{
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	//int ele;
	for(int ele:array){
		cout<<ele<<endl;  //Disadvantage of this loop is that it pass through all the elements of the loop while in casec of for or while we can decide till where we want to loop to be executed. 
	}
	return 0;
}
/*
In case of for each loop if we want to print the element by entering the inputs then we need to do it in the same loop ity will wont be printed in different loops.
*/
