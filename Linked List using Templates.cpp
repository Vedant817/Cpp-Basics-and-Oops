#include<iostream>
using namespace std;

template<class T>
struct node{
	T data;
	node<T> *next;
};

template<class T>
class linkedList{
	public:
		node<T> *head;
		node<T> *last;
		
		linkedList(){
			head=NULL;
			last=NULL;
		}
		void add(T data){
			if(!head){
				head=new node<T>;
				head->data=data;
				head->next=NULL;
				last=head;
			}
			else{
				if(last=head){
					last =new node<T>;
					last->data=data;
					last->next=NULL;
					head->next=last;
				}
				else{
					node<T> *ptr= new node<T>;
					ptr->data=data;
					ptr->next=NULL;
					last->next=ptr;
					last=ptr;
				}
			}
		}
		T gatData(int index){
			if(index==0){
				return this->head->data;
			}
			else{
				node<T> *temp=this->head;
				for(int i=0;i<index;i++){
					temp=temp->next;
					return temp->next->data;
				}
			}
		}
};

int main()
{
	linkedList<int>l1;
	l1.add(5);
	l1.add(2);
	l1.add(10);
	cout<<l1.gatData(2)<<endl;
	
	return 0;
}

