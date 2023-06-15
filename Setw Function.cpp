//Setw() function. Used for formatting the output.
/*
1235
45
New:
1234
  45
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int basic=950,Allpwance=95,Total=1045;
	cout<<setw(10)<<"Basic:"<<setw(10)<<basic<<endl;
	cout<<setw(10)<<"Allpwance:"<<setw(10)<<Allpwance<<endl;
	cout<<setw(10)<<"Total:"<<setw(10)<<Total<<endl;
	
	return 0;
}
