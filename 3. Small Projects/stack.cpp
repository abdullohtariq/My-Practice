#include <iostream>
using namespace std;

// Define the maximum size of the stack
#define MAXSIZE 8

int stack[MAXSIZE]; // Stack array to store data
int top = -1;       // Top pointer initialized to -1 indicating an empty stack

// Function to check if the stack is empty
int isEmpty() {
    // If top == -1, stack is empty
    if (top == -1) 
        return 1;
    else 
        return 0;
}

// Function to check if the stack is full
int isFull() {
    // If top == MAXSIZE - 1, stack is full
    if (top == MAXSIZE - 1) 
        return 1;
    else 
        return 0;
}

// Function to insert (push) an element into the stack
void push(int data) {
    // Check if the stack is full before inserting
    if (isFull()) {
        cout << "Could not insert data. Stack is full.\n";
    } else {
        // Increment top and insert data
        top = top + 1;
        stack[top] = data;
    }
}

// Function to delete (pop) an element from the stack
int pop() {
    int data;

    // Check if the stack is empty before popping
    if (isEmpty()) {
        cout << "Could not retrieve data. Stack is empty.\n";
    } else {
        // Retrieve top element, then decrement top
        data = stack[top];
        top = top - 1;
        return data;
    }
    return -1; // Return -1 if the stack is empty
}

// Main function to test the stack implementation
int main() {
    // Push elements into the stack
    push(10);
    push(20);
    push(30);

    // Check if the stack is empty
    cout << "Is the stack empty? " << (isEmpty() ? "true" : "false") << endl;

    // Pop elements and display them
    cout << "Popped element: " << pop() << endl;
    cout << "Popped element: " << pop() << endl;

    // Check again if the stack is empty
    cout << "Is the stack empty? " << (isEmpty() ? "true" : "false") << endl;

    return 0;
}