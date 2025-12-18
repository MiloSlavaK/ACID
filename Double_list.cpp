#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

Node* create() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int buf = 1;
    while (buf) {
        std::cin >> buf;
        if (buf==0) {
            break;
        }
        Node* new_node = new Node(buf);
        if (head==nullptr) {
            head=tail=new_node;
        } else {
            new_node->prev = tail;
            tail->next = new_node;
            tail=new_node;
            
        }
    }
    return head;
}

void pushFront(int val) {
    
    Node* new_node = new Node(val);

    if (head==nullptr) {
        head=tail=new_node;
    } else {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
}

void pushBack(int val) {
    Node* new_node = new Node(val);

    if (head==nullptr) {
        head=tail=new_node;
    } else {
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
}

int main() {
}
