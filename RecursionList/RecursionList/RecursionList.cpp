#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void ReversePrint(Node* ptr) {
    if (ptr != nullptr) {
        ReversePrint(ptr->next);
        cout << ptr->data << endl;
    }
}

int main() {
    Node* no1 = new Node;
    Node* no2 = new Node;
    Node* no3 = new Node;
    Node* no4 = new Node;

    no1->data = 69;
    no2->data = 420;
    no3->data = 15;
    no4->data = 1488;

    no1->next = no2;
    no2->next = no3;
    no3->next = no4;
    no4->next = NULL;

    ReversePrint(no1);
}