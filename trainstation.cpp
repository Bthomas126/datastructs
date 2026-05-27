
#include <iostream>
#include <string>


struct Node {
    string name;
    Node* next;
    Node(string n) {
    name = n;
    next = nullptr;
}
};
class Queue {
    private:
    Node* front;
    Node* back;
    public:
    Queue() {
    front = nullptr;
    back = nullptr;
}
bool empty() const {
    return front == nullptr;
}
// FUNCTION 1 TO IMPLEMENT
void enqueue(string passenger){
    Node* newNode = new Node(passenger);
    if(back = nullptr){
        front = back = newnode;
        return;
    }

    back -> next = newNode;

    back = newNode;

}
// FUNCTION 2 TO IMPLEMENT
string dequeue(){
    if(front == nullptr){
        return "No one in Queue.";
    }
    string stringtemp = front -> name;

    Node* temp  =  front;

    front = temp -> next;

    if(front == nullptr){
        back = nullptr;
    }

    return stringtemp;







}
};
using namespace std;
int main() {
    Queue trainLine;
    trainLine.enqueue("Alice");
    trainLine.enqueue("Bob");
    trainLine.enqueue("Charlie");
    cout << trainLine.dequeue() << " boarded the train!" << endl;
    cout << trainLine.dequeue() << " boarded the train!" << endl;
    trainLine.enqueue("David");
    cout << trainLine.dequeue() << " boarded the train!" << endl;
    cout << trainLine.dequeue() << " boarded the train!" << endl;
return 0;
}
