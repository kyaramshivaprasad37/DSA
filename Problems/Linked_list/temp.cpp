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
void insertAtBegin(int a) {
    Node *temp = new Node(a);
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
void insert(int data, int pos) {

    if (pos <= 0) {
        cout << "invalid position";
        return;
    }
    if (pos == 1) {
        insertAtBegin(data);
        return;
    }
    int c = 1;
    Node *temp = head;
    while (temp != NULL) {
        if (c == pos - 1) {
            Node *p = new Node(data);
            p->next = temp->next;
            temp->next = p;
            return;
        }
        c++;
        temp = temp->next;
    }

    cout << "invalid position";
    return;
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

void deleteNode(int d) {

    if (head->data == d) {
        Node *del = head;
        head = head->next;
        delete del;
        return;
    }

    Node *temp = head;
    while ((temp->next != NULL) && (temp->next->data != d)) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        cout << "Element not found" << '\n';
        return;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

int main() {

    insertAtBegin(1);
    insertAtBegin(2);
    insertAtBegin(3);

    insert(5, 5);
    deleteNode(1);

    display();

    return 0;
}
