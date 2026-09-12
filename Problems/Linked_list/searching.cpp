#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};
Node *head = NULL;
void display() {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtBegin(int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtEnd(int a) {
    if (head == NULL) {
        head = new Node(a);
        return;
    }
    Node *p = new Node(a);
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
}

bool search(int data) {
    Node *temp = head;

    while (temp != NULL) {
        if (temp->data == data) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void insertatK(int k, int ele) {

    if (k == 0) {
        insertAtBegin(ele);
        return;
    }

    Node *p = new Node(ele);
    Node *temp = head;
    for (int i = 0; i < k - 1; i++) {
        temp = temp->next;
    }
    Node *d = temp->next;
    temp->next = p;
    p->next = d;
}

void circular() {
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
}

void insertAtBeginCircular(int a) {
    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    Node *p = new Node(a);
    temp->next = p;
    p->next = head;
    head = p;
}

void displayCircular() {
    Node *temp = head;
    cout << head->data << ' ';
    while (temp->next != head) {
        cout << temp->next->data << ' ';
        temp = temp->next;
    }
    cout << '\n';
}

bool searchInCircular(int a) {
    Node *temp = head;
    while (temp->next != head) {
        if (a == temp->data) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    insertAtBegin(1);
    insertAtBegin(2);
    insertAtBegin(3);
    insertAtBegin(4);
    // cout << search(5);
    // insertatK(2, 5);
    // insertatK(3, 6);
    // insertatK(0, 4);
    circular();
    insertAtBeginCircular(5);
    displayCircular();
    cout << searchInCircular(6);
    // display();
    return 0;
}
