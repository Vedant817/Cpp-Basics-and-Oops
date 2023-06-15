#include<iostream>
using namespace std;

class shop{
	int itemID[100];
	int itemPrice[100];
	int counter;
	//If we introduce more than one shop and if we want to count number of shops introduced in the program then we need to declare a static variable in the class and also outside the class.
	//static int count;
	//void shop :: count;
	//Shop :: count
	public:
		void initcounter(void){
			counter=0;
		}
		void setPrice(void);
		void displayPrice(void);
};

void shop :: setPrice(void){
	cout<<"Enter Id of your item"<<endl;
	cin>>itemID[counter];
	cout<<"Enter Price of your item"<<endl;
	cin>>itemPrice[counter];
	counter++;
}

void shop :: displayPrice(void){
	for(int i=0;i<counter;i++){
		cout<<"The Price of item with Id "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
	}
	
}

int main()
{
	shop dukaan;
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.displayPrice();
	
	
	return 0;
}
