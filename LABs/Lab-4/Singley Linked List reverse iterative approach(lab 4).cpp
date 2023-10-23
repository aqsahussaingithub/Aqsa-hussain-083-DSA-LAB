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
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
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
	
	void reverse()	
	{
		Node *ptr,*pre,*nex;
		ptr=head;
		pre=NULL;
		nex=NULL;
		while(ptr!=NULL){
			nex=ptr->next;
			ptr->next=pre;
			pre=ptr;
			ptr=nex;
			
		}
		
		head=pre;
	}
		
	
};

int main()
{
	Node n;
    n.insert_end(1);
    n.insert_end(2);
    n.insert_end(20);
    n.insert_end(30);
    n.insert_end(50);
    n.insert_end(100);
    n.insert_end(105);
    n.display();
    cout<<"after reverse:\n";
    n.reverse();
    n.display();
	return 0;
	
}
