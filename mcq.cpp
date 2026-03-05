#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void print(node* itr){
    while(itr){
        cout << itr->val << "->";
        itr = itr->next;
    }
    cout << "NULL \n";
}

void clear(node* itr){
    while(itr){
        node* temp = itr;
        itr = itr->next;
        delete temp;
    }
    cout<<"HEAP MEMORY IS CLEARD !\n";
}

int main() {

    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);

    a->next = b;
    b->next = c;

    print(a);
    clear(a);
    return 0;
}