// Двусвязный список
#include <iostream>

//Узел 
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

//Создание списка
Node* head = nullptr;
Node* tail = nullptr;

Node* create() {

    int buf = 1;
    while (buf) {
        std::cin >> buf;
        if (buf == 0) {
            break;
        }
        Node* new_node = new Node(buf);
        if (head == nullptr) {
            head = tail = new_node;
        }
        else {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;

        }
    }
    return head;
}

// добавление в начало
void pushFront(int val) {

    Node* new_node = new Node(val);

    if (head == nullptr) {
        head = tail = new_node;
    }
    else {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
}
// добавление в конец
void pushBack(int val) {
    Node* new_node = new Node(val);

    if (head == nullptr) {
        head = tail = new_node;
    }
    else {
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
}
// вставка по индексу
void insert(int val, int index) {
    Node* new_node = new Node(val);
    Node* cur = head;
    int i = 0;
    if (head == nullptr) {
        pushFront(val);
        return;
    }

    while (i < index - 1) {
        cur = cur->next;
        i++;
    }
    if (cur == nullptr) {
        pushBack(val);
    }
    new_node->prev = cur;
    new_node->next = cur->next;
    cur->next = new_node;
    cur->next->prev = new_node;

}

// удаление из начала
void deleteFront() {

    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
}
// удаление из конца
void deleteBack(int val) {

    if (head == nullptr) {
        return;
    }
    Node* temp = head;

    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
}

// удаление по индексу
void delete_index(int index) {
 
    Node* cur = head;
    int i = 0;
    if (head == nullptr) {
        return;
    }

    while (i < index - 1) {
        cur = cur->next;
        i++;
    }
    if (cur == nullptr) {
        return;
    }
    Node* del_node = cur->next;
    cur->next = del_node->next;
    del_node->next->prev = cur;
    delete del_node;

}
// меняем местами
void swop(int i, int j) {
    Node* cur = head;
    Node* node1 = nullptr;
    Node* node2 = nullptr;
    if (i == j) { return; }
    int index = 0;
    while (cur) {
        if (index == i) node1 = cur;
        if (index == j) node2 = cur;

        cur = cur->next;
        index++;
    }
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

// вывод вперед
void printForward() {
    Node* cur = head;
    while (cur) {
        std::cout << cur->data << " ";
        cur = cur->next;
    }
    std::cout << std::endl;
}

// вывод назад
void printBackward() {
    Node* cur = tail;
    while (cur) {
        std::cout << cur->data << " ";
        cur = cur->prev;
    }
    std::cout << std::endl;
}

int main() {
}
