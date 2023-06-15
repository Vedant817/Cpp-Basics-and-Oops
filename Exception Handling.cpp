#include<iostream>
#include<string>
using namespace std;

class Printer{
	private:
		string name;
		int available_ppr;
	public:
		Printer(string str,int num){
			name=str;
			available_ppr=num;
		}
		void print(string doc){
			int requiredPPr=doc.length()/10;
			if(requiredPPr>available_ppr){
				throw "No Paper";//break the further execution of the function.
		}
		else{
			cout<<"Printing....."<<endl;
			cout<<doc<<endl;
			available_ppr-=requiredPPr;
		}
	}
};

int main()
{
//	We actually use exceptions to handle the run time errors which can occur during the run and instread of terminating the program it will display some message.
//	It will continue the normal flow of the program even there is any run time error.
//	They are throw,catch and try.
	try{
	Printer myPrinter("HP",8);
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	myPrinter.print("Hello there!!");
	}
	catch(const char* txtException){//here catch can be anything as defined above.
		cout<<"Exception:"<<txtException<<endl;
	}
	catch(...){
		//this will handle any type of exceptiion.
		cout<<"Exception Happened!!"<<endl;
	}
//	Default Handler should always be at the last otherwise it will give an error.
	
	return 0;
}

