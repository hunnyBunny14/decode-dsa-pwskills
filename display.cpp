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

// Display function
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Free entire linked list
void freeList(node* head) {
    node* temp;

    while (head != NULL) {
        temp = head;          // store current node
        head = head->next;    // move head forward
        delete temp;          // delete old node
    }
}

int sizeLL(node* a){
    node* temp = a;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {

    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout<<"Linked List is : ";
    display(a);
    int sz = sizeLL(a);
    cout<<"Size of LL is : "<<sz;
    freeList(a);   // free memory properly

    return 0;
}