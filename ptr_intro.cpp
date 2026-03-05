#include <iostream>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        next = NULL;
    }
};

int main() {
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    a->next = b;
    b->next = c;
    node* temp = a;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
}