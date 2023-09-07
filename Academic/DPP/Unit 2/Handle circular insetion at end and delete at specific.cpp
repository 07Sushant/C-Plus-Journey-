#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    
    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
    }
}

void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        cout << "Value not found in the linked list!" << endl;
        return;
    }

    Node* current = head;
    Node* previous = nullptr;
    bool found = false;

    do {
        if (current->data == value) {
            found = true;
            if (previous == nullptr) {
                Node* temp = current;
                while (temp->next != head) {
                    temp = temp->next;
                }
                head = current->next;
                temp->next = head;
            } else {
                previous->next = current->next;
            }
            delete current;
            break;
        }
        previous = current;
        current = current->next;
    } while (current != head);

    if (!found) {
        cout << "Value not found in the linked list!" << endl;
    }
}

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "Empty List" << endl;
        return;
    }

    Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
}

int main() {
    Node* head = nullptr;
    int n, value;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertEnd(head, value);
    }

    int deleteValue;
    cin >> deleteValue;

    cout << "Linked list before deletion" << endl;
    displayList(head);
    cout << endl;

    deleteNode(head, deleteValue);

    cout << "Linked list after deletion" << endl;
    displayList(head);
    cout << endl;

    return 0;
}

