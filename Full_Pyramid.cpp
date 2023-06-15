#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,space,k=0;

    for(i=1;i<=n;i++,k=0){
        for(space=1;space<=n-i;space++){
            cout<<" ";
        }
        while(k!=2*i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
