#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int newData) {
        data = newData;
        next = nullptr;
    }
};

void insertBeg(Node*& head, int newData)
{
    Node* newNode = new Node(newData);

    newNode->next = head;

    head = newNode;
}


void insertAfter(Node* prevNode, int newData)
{
     Node* newNode = new Node(newData);
     
     newNode -> next = prevNode -> next;
     
     prevNode -> next = newNode;
}

void insertLast(Node*& head, int newData)
{
    Node* newNode = new Node(newData);

    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void replace(Node* head, int index, int newValue)
{
    Node* temp = head;

    for(int i = 0; i < index; i++){
        temp = temp -> next;
    }
    
    temp -> data = newValue; 
}


int get(Node* head, int index)
{
    Node* temp = head;

    for(int i = 0; i < index; i++){
        temp = temp -> next;
    }

    return temp -> data;
}


bool search(Node* head, int target)
{
    if(head == nullptr){
        return false;
    }

    if(head -> data == target){
        return true;
    }

    Node* temp = head;

    while(temp != nullptr){
        temp = temp -> next;
        
        if(temp -> data == target){
            return true;
        }
    }

    return false;
}

void deleteFirst(Node*& head)
{
    if(head == nullptr){
        return;
    }

    Node* temp = head;

    head = temp -> next;

    delete temp;

}

void deleteLast(Node*& head)
{
    if(head == nullptr){
        return;
    }

    Node* temp = head;
    while(temp->next += nullptr) {
        temp = temp->next;
    }





}


void printList(Node* node)
{
    while(node != nullptr)
    {
        cout << node->data << " -> ";
        node = node->next;
    }

    cout << "NULL";
}

int main()
{
    Node* head = nullptr;

    insertBeg(head, 3);
    insertBeg(head, 8);
    insertBeg(head, 12);

    insertLast(head, 20);

    printList(head);

    return 0;
}