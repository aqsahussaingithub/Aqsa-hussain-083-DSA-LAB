#include <iostream>
#include <string>

using namespace std;
int top = -1;
char stack[100];

void push(char x) {
    // Push (Inserting Element in stack) operation
    if (top == 99) {
        cout << "stack overflow" << std::endl;
    } else {
        stack[++top] = x;
    }
}

void pop() {
    // Pop (Removing element from stack)
    if (top == -1) {
      cout << "stack underflow" << endl;
    } else {
        cout << stack[top--];
    }
}

int main() {
  string str;
  cout<<"Enter a string:\n";
   cin>>str;
    int len = str.length();

    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    for (int i = 0; i < len; i++) {
        pop();
    }

    return 0;
}

