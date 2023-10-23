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
	
	void insert_beg(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  head=p;
		   	
		}		
	}
	
	void insert_at_value(int pos,int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
		  Node *ptr;
		  ptr=head;
		  while(ptr->data!=pos)
		  { 
		  ptr=ptr->next;
		
		  	}
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= ptr->next;
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
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
	
    }	
	
};

int main()
{
	Node n;
    n.insert_beg(20);
    n.insert_beg(30);
    n.insert_beg(3);
    n.insert_at_value(30,50);

    n.display();
	return 0;
	
}
