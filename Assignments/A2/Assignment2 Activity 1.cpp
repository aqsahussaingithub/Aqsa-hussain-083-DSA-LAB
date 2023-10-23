#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void displayLinkedList(Node* head) {
    cout << "The linked list is: ";
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl << "****head address: " << head << endl;
    cout << "--------------------------" << endl;
    cout << "head content: " << head<< endl;
    cout << "--------------------------" << endl;
    cout << "***ptr address:*** @" << &head << endl;
    cout << "--------------------------" << endl;
    cout << "ptr content: " << head << endl;
    cout << "----------------------" << endl;
    ptr = head;
    while (ptr != NULL) {
        cout << "ptr->data: " << ptr->data << endl;
        cout << "----------------------" << endl;
        cout << "ptr: " << ptr << endl;
        cout << "ptr->next: " << ptr->next << endl;
        ptr = ptr->next;
    }
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 30;
    fourth->next = NULL;

    displayLinkedList(head);

    return 0;
}

