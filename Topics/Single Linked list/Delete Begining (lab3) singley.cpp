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
	
   void del_beg(int n){
   	if(head==NULL){
   		
   		cout<<"empty";
	   }
	else{
		
		Node *ptr;
		ptr=head;
		head=ptr->next;
		delete ptr;
		ptr=NULL;
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
    n.insert_beg(1);
    n.insert_beg(2);
    n.insert_beg(20);
    n.insert_beg(30);
    n.insert_beg(50);
    n.display();
    n.del_beg(50);
    cout<<"After deletion\n";
    n.display();
     n.del_beg(30);
     cout<<"After deletion\n";
    n.display();
	return 0;
	
}
