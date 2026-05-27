// Array implementation of stack functions
#include <iostream>

using namespace std;

#define MAX 100

class Stack {
	int top;
public:
	int a[MAX]; // Maximum size of Stack

	Stack() { top = -1; }

  // functions prototypes
	bool push(int item);
	int pop();
	int peek();
	bool isEmpty();
		
	}
};

bool Stack::push(int item)
{
	if(top >= MAX -1){
		cout << "Stack overflow"
	}
	top++;
	a[top] == item;
	return true;
}

int Stack::pop()
{
	if(isEmpty()){
		return -1;
	}

	return{
		int x = a[top];
		top --

	}
}



int Stack::peek()
{
	return a[top];
}

bool Stack::isEmpty()
{
	if(top == -1){
		return false;
	}
}

int main()
{
	class Stack s;
	s.push(4);
	s.push(5);
	s.push(6);
	cout << s.pop() << " is successfully popped from stack\n";

	cout<<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		// print top element in stack
		cout<<s.pop()<<" ";
		// remove top element in stack
		// s.pop();
	}

	return 0;
}