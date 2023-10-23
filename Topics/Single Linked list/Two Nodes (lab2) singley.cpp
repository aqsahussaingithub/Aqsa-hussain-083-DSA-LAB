#include<iostream>
using namespace std;
class Node{
	private:
	
	int data;
	Node *next;
		
	public:
	Node *head;
	Node(){
		head=NULL;
	}
	
	void insert_end(int n){
		
		if(head==NULL)
		{
//		 cout<<"linked list is empty"<<endl;
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			
			Node *p;
			p=new Node();
			p->data=n;
			p->next=NULL;
			head->next=p;
			
		}		
	}
	
	void display()
	{
	Node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		cout << " \nNo data is in the list.."<<endl;
		return;
	}
	else{
		
		while(ptr!=NULL){
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
	
    }	
};

int main()
{
	Node n;
    n.insert_end(1);
    n.insert_end(2);
    n.insert_end(20);
    n.display();
	return 0;
	
}
