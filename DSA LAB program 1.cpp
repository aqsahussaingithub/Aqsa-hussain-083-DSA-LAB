#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(NULL) {}
};

void displayLinkedList(Node* head) {
    if (head == NULL) {
        std::cout << "The linked list is empty." << std::endl;
        return;
    }

    std::cout << "The linked list is:" << std::endl;
    Node* ptr = head;
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;

    std::cout << "*head address:**" << &head << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    ptr = head;
    while (ptr) {
        std::cout << "\nhead content: " << ptr << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "*ptr address: **" << ptr << std::endl;
        std::cout << "----------------------------------" << std::endl;
        std::cout << "ptr content: " << ptr << std::endl;
        std::cout << "----------------------------------" << std::endl;
        std::cout << "ptr->data: " << ptr->data << std::endl;
        std::cout << "----------------------------------" << std::endl;
        std::cout << "ptr: " << ptr << std::endl;
        if (ptr->next) {
            std::cout << "ptr->next: " << ptr->next << "." << std::endl;
            std::cout << "ptr->data: " << ptr->next->data << std::endl;
            std::cout << "---------------------------------" << std::endl;
        } else {
            std::cout << "ptr->next: 0" << std::endl;
            std::cout << "---------------------------------" << std::endl;
        }
        ptr = ptr->next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    displayLinkedList(head);

    // Remember to free the memory allocated for the linked list nodes
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
