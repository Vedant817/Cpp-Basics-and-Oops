#include<iostream>
using namespace std;
int main(){
    int n=7;
    cout<<"Star Square."<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Number Square."<<"\n";
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cout<<j;
		}
		cout<<endl;
	}
    return 0;
}
