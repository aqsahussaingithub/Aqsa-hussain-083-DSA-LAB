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
	}
	
	void display()
	{
		if(head==NULL)
		{
		 cout<<"linked list is empty"<<endl;
			
		}
		
		else
		
		{
	
		cout<<head->data<<endl;

		}
	}	
};

int main()
{
	Node n;
    n.insert_end(1);
//    n.insert_end(2);
    n.display();
	return 0;
	
}
