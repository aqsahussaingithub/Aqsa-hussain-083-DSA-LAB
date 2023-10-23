#include<iostream>
using namespace std;
class Node{
	private:	
	int data;
	Node *next;
	Node *prev;
		
	public:
	Node *head;
	
	Node(){
		head=NULL;
	}
	
	void insert_end(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;
		 head->prev=NULL;	
			
		}
		
		else
		
		{
			
		  Node *p,*ptr;
		  ptr=head;
		  while(ptr->next!=NULL)
		  {
		  	ptr=ptr->next;
		  }
		   
		  p=new Node();
		  p->data=n;
		  p->next= NULL;
		  p->prev=ptr;
		  ptr->next=p;
		   	
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
			cout<<"Linked list using next pointer: "<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
	
    }	
    
    
    void rev_display()
	{
	Node *ptr;
	Node *temp;
	ptr=head;
	if(ptr==NULL)
	{
		cout << " \nNo data is in the list.."<<endl;
		return;
	}
	else{
		
		while(ptr->next!=NULL){
//			cout<<"next pointer: "<<ptr->data<<endl;
			ptr=ptr->next;
		}
		temp=ptr;
		
		while(temp!=NULL){
			
			cout<<"previous  pointer: "<<temp->data<<endl;
			temp=temp->prev;
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
    n.insert_end(30);
    n.display();
    cout<<"the linked list in reverse order:\n";
    n.rev_display();
	return 0;
	
}
