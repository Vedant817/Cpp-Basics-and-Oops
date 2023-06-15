//Counting the number of particular elements.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>V(6);
	int i;
	for(i=0;i<6;i++){
		cout<<"Enter the Element ";
		cin>>V[i];
		cout<<endl;
	}
	cout<<"Enter the value of x:";
	int x;
	cin>>x;
	
	int occurance=0;
	for(i=0;i<V.size();i++){
		if(V[i]==x){
			occurance+=1;
		}
	}
	cout<<occurance<<endl;
	
	return 0;
}
