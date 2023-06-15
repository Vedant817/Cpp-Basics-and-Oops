/*Vectors:Another Datatypes:These are dynamic Arrays i.e. they can be resized according to the need of the user.
These are contigous memory allocation.
*/
#include<iostream>
#include<vector>  //vector<datatype>vector-name(size)
using namespace std;

int main()
{
	/*
	1. Size= V.size()
	2. Resize= V.resize()   When we resize it then vector is stored in another location and values are copied in the new vector.
	3. Capacity>=Size:Capacity increases with increasing the size of the vector. 
	4. Addition= V.push_back(element): Append the element in the vector.
	5. Insert= V.insert(position,element)
	6. Position of first element= V.begin()
	7. Position of last element= V.end()
	8. Remove the element= V.pop-back()  Removes from the last
	9. Erase= V.erase(position)
	*/
	
	vector<int>V;
	cout<<"Size: "<<V.size()<<endl;
	cout<<"Capacity: "<<V.capacity()<<endl;
	V.push_back(1);
	cout<<"Size: "<<V.size()<<endl;
	cout<<"Capacity: "<<V.capacity()<<endl;
	V.push_back(2);
	V.push_back(3);
	V.push_back(4);
	cout<<"Size: "<<V.size()<<endl;
	cout<<"Capacity: "<<V.capacity()<<endl;
	
	V.resize(10);
	cout<<"Size: "<<V.size()<<endl;
	cout<<"Capacity: "<<V.capacity()<<endl;
}

