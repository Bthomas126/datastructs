#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class implementation using a singly linked list
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int data) {
        
        if(!temp){
            cout << "stack overflow";
            exit(1);
        }
        
        Node* newNode = new Node(data);
        
        if(top == nullptr){
            top == newNode;
        }
        
        top -> next = newNode;
        top = newNode;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int peek() {
        if(isEmpty){
            exit(1);
        }
        return top -> data;
    }

    void pop() {
        
        if(isEmpty){
            return;
        }


        top -> next = nullptr;
        

        top = next -> top;

    }

    void printList() {
        if (isEmpty()) {
            cout << "\nStack is empty";
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Driver Code
int main() {
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.printList();
    cout << "\nTop element is " << s.peek() << endl;

    s.pop();
    s.pop();

    s.printList();
    cout << "\nTop element is " << s.peek() << endl;
    
    return 0;
}
