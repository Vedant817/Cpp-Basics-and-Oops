#include<iostream>
using namespace std;

typedef struct employee{
	int Id;
	char favChar;
	float salary;
}ep;

union money  //Only one component is used in this case as only particular amt of memory is alloted that is to be used by all the variable.
{
	int rice;
	char car;
	float pounds;
}

int main()
{
	struct employee harry; //ep harry;
	harry.Id=1;
	harry.favChar='v';
	harry.salary=1200000;
	
	cout<<harry.salary<<endl;
	cout<<harry.favChar<<endl;
	
	return 0;
}
