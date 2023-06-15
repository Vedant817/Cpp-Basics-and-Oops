#include<iostream>
#include<cmath>
using namespace std;

class BankDeposit{
	private:
		int principal;
		int years;
		float interestRate;
		float returnValue;
	public:
		BankDeposit(){};
		BankDeposit(int p,int y,int r); //Interest Rate in decimals
		BankDeposit(int p,int y,float r); //Interest Rate in percentage
		void show(){
			cout<<"Principal Amt. was "<<principal<<endl;
			cout<<"The Returned Amt. is "<<returnValue<<endl;
		}
};
BankDeposit::BankDeposit(int p,int y,float r){
	principal=p;
	years=y;
	interestRate=r;
	returnValue=principal;
	for(int i=0;i<y;i++){
		returnValue = returnValue*(r+1);
	}
}
BankDeposit::BankDeposit(int p,int y,int r){
	principal=p;
	years=y;
	interestRate=float(r/100);
	returnValue=principal;
	for(int i=0;i<y;i++){
		returnValue = returnValue*(r+1);
	}
}

int main()
{
	BankDeposit b(1000,3,10);
	b.show();
	
	return 0;
}
