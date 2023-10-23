#include<iostream>
using namespace std;
class Node {
   private:
   int data;
   Node *next;
   public:
   	Node *front,*rear=NULL;
 
	void enqueue(int x){
	Node *p=new Node;
	p->data=x;
	p->next=NULL;
	if(front==NULL || rear==NULL){
		front=p;
		rear=p;
		cout<<"\nThe inserted element in queue is: \n"<<rear->data; 

	}
	else{
		rear->next=p;
		rear=p;
        cout<<"\nThe inserted element in queue is: \n"<<rear->data;
			}	
}

void dequeue(){
	Node *d=new Node();
	d=front;
	if(d==NULL)
	{
		cout<<"\nEmpty queue";
	}
	else{
		if(d==NULL)
		{cout<<"The dequeue elements is: \n";
		cout<<d->data;
		front=front->next;
		delete d;
		d=NULL;
		}
		else{
		cout<<"\nThe dequeue elements is: \n";
		cout<<front->data;
		front=front->next;
	    delete d;
		d=NULL;
		}
	}
}
void display() { 
    Node *temp = front;
    cout << "\nThe queue elements are: ";
    if (temp == NULL) {
        cout << "empty";
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}



};
int main(){
	Node i;
	i.enqueue(1);
	i.enqueue(2);
	i.display();
	i.dequeue();
	i.display();
	i.enqueue(3);
	i.enqueue(4);
	i.display();
    i.dequeue();
    i.dequeue();
    i.dequeue();
    i.dequeue();
    i.display();
	return 0;
}

