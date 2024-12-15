#include <iostream>
using namespace std;

// Class to represent a node in the linked list
class Node {
public:
    int data;          // Data stored in the node
    Node* next;        // Pointer to the next node

    Node(int value) {  // Constructor to initialize a node
        data = value;
        next = nullptr;
    }
};

// Class to represent the linked list
class LinkedList {
private:
    Node* head;  // Pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = nullptr;
    }

    // Method to add a new node at the end of the linked list
    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {  // If the list is empty, set the new node as the head
            head = newNode;
            return;
        }

        // Traverse to the end of the list
        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        // Link the new node to the last node
        current->next = newNode;
    }

    // Method to insert a node at the beginning of the linked list
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;  // Point new node to the current head
        head = newNode;        // Make new node the head
    }

    // Method to insert a node at a specific position in the linked list
    void insertAtPosition(int data, int position) {
        if (position == 0) {  // If position is 0, insert at the beginning
            insertAtBeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* current = head;
        int index = 0;

        // Traverse to the node before the desired position
        while (current != nullptr && index < position - 1) {
            current = current->next;
            index++;
        }

        // If current is null, the position is invalid
        if (current == nullptr) {
            cout << "Invalid position." << endl;
            delete newNode;
            return;
        }

        // Insert the new node at the specified position
        newNode->next = current->next;
        current->next = newNode;
    }

    // Method to delete a node from the beginning of the linked list
    void deleteAtBeginning() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;  // Move the head to the next node
        delete temp;        // Delete the old head
    }

    // Method to delete a node from the end of the linked list
    void deleteAtEnd() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        if (!head->next) {  // If there's only one node
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        while (current->next && current->next->next) {  // Traverse to the second last node
            current = current->next;
        }

        delete current->next;  // Delete the last node
        current->next = nullptr;  // Set the next of second last node to null
    }

    // Method to delete a node at a specific position in the linked list
    void deleteAtPosition(int position) {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        if (position == 0) {  // If position is 0, delete at the beginning
            deleteAtBeginning();
            return;
        }

        Node* current = head;
        int index = 0;

        // Traverse to the node before the desired position
        while (current->next != nullptr && index < position - 1) {
            current = current->next;
            index++;
        }

        // If the next node is null, the position is invalid
        if (current->next == nullptr) {
            cout << "Invalid position." << endl;
            return;
        }

        Node* temp = current->next;      // Node to be deleted
        current->next = temp->next;     // Link previous node to the next node
        delete temp;                    // Delete the node
    }

    // Method to search for a node by its value
    Node* search(int target) {
        Node* current = head;
        int position = 0;

        while (current) {
            if (current->data == target) {  // If the target value is found
                cout << "Value " << target << " found at position " << position << "." << endl;
                return current;
            }
            current = current->next;  // Move to the next node
            position++;
        }

        cout << "Value " << target << " not found in the list." << endl;
        return nullptr;
    }

    // Method to reverse the linked list iteratively
    void reverseIterative() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current) {
            next = current->next;  // Store the next node
            current->next = prev;  // Reverse the current node's pointer
            prev = current;        // Move prev and current one step forward
            current = next;
        }

        head = prev;  // Update head to the new front of the list
    }

    // Helper method for recursive reversal
    Node* reverseRecursiveHelper(Node* current) {
        if (!current || !current->next) {
            return current;  // Base case: last node becomes new head
        }

        Node* newHead = reverseRecursiveHelper(current->next);  // Reverse the rest of the list
        current->next->next = current;  // Make the next node point to the current node
        current->next = nullptr;       // Set the current node's next to null

        return newHead;
    }

    // Method to reverse the linked list recursively
    void reverseRecursive() {
        head = reverseRecursiveHelper(head);
    }

    // Method to traverse the linked list and print the data of each node
    void traverse() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";  // Print the data
            current = current->next;          // Move to the next node
        }
        cout << "None" << endl;  // Indicate the end of the list
    }
};

// Example usage
int main() {
    LinkedList linkedList;
    int choice, data, position;

    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at specific position\n";
        cout << "4. Delete at beginning\n";
        cout << "5. Delete at end\n";
        cout << "6. Delete at specific position\n";
        cout << "7. Search for a value\n";
        cout << "8. Reverse iteratively\n";
        cout << "9. Reverse recursively\n";
        cout << "10. Traverse\n";
        cout << "11. Exit\n";
        cout<<"12. clear Screen\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> data;
                linkedList.insertAtBeginning(data);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> data;
                linkedList.append(data);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> data;
                cout << "Enter position to insert at: ";
                cin >> position;
                linkedList.insertAtPosition(data, position);
                break;
            case 4:
                linkedList.deleteAtBeginning();
                break;
            case 5:
                linkedList.deleteAtEnd();
                break;
            case 6:
                cout << "Enter position to delete at: ";
                cin >> position;
                linkedList.deleteAtPosition(position);
                break;
            case 7:
                cout << "Enter value to search for: ";
                cin >> data;
                linkedList.search(data);
                break;
            case 8:
                linkedList.reverseIterative();
                break;
            case 9:
                linkedList.reverseRecursive();
                break;
            case 10:
                linkedList.traverse();
                break;
            case 11:
                cout << "Exiting program." << endl;
                return 0;
            case 12:
                system("CLS");
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
