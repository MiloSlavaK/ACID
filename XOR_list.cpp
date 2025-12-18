#include <iostream>

struct Node {
	int data;

	Node* npx;

	Node(int val) : data(val), npx(nullptr) {}

};

Node* XOR(Node* a, Node* b) {
	return (Node*)((uintptr_t)a^(uintptr_t)b);
}

Node* create() {
	Node* head = nullptr;
	Node* tail = nullptr;
	Node* prev_tail = nullptr;

	int buf = 1;

	while (buf) {
		if (buf == 0) { return; }
		std::cin >> buf;
		Node* nnode = new Node(buf);
		if (head == nullptr) {
			head = tail = nnode;
			nnode->npx = XOR(nullptr, nullptr);
		}
		else {
			tail->npx = XOR(prev_tail, nnode);
			nnode->npx = XOR(tail, nullptr);
			prev_tail = tail;
			tail = nnode;
		}

		return head;
	}
}


void print(Node* head) {
	Node* cur = head;
	Node* prev = nullptr;
	Node* next = nullptr;

	while (cur) {
		std::cout << cur->data << " ";
		next = XOR(prev, cur->npx);
		prev = cur;
		cur = next;
	}
}


int main() {

}
