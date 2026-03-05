#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        next = NULL;
    }
};

// Recursive display
void display(node* head) {
    if (!head) return;
    cout << head->val << " ";
    display(head->next);
}

// Size of linked list
int sizeLL(node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

// Free entire linked list safely
void freeList(node*& head) {
    while (head) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {

    // Creating nodes (Heap)
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);

    // Linking nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Linked List is: ";
    display(a);

    cout << "\nSize of LL is: " << sizeLL(a) << endl;

    freeList(a);   // Proper cleanup

    return 0;
}