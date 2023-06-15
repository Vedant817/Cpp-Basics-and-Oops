#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		friend complex sumComplex(complex o1,complex o2);
		void printNumber(){
			cout<<"Your Number is "<<a<<"+i"<<b<<endl;
			    }
};
complex sumComplex(complex o1,complex o2){
	complex o3;
	o3.setNumber(o1.a+o2.a,o1.b+o2.b);
	return o3;
}

int main(){
	complex c1,c2,sum;
	c1.setNumber(1,2);
	c1.printNumber();
//	cout<<"\n";
	c2.setNumber(3,4);
	c2.printNumber();
	
	sum=sumComplex(c1,c2);
	sum.printNumber();
	
	return 0;
}
/*Properties of friend function
1. Not in the scope of the class.
2. Since it is ot in the scope of the class, it cannot be called from the object of that class.
3. Can be invoked without any object.
4. Can be declared inside and outside the private part of the program.
5. It cannot access the members directly by their names and need object_name.member_name to access any memeber.
*/
