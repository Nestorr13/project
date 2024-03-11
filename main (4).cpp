#include <iostream>

class Node {
public:
    int data();
    Node* next;
};

class OneLinkedList() {
public:
    Node* head, * tail;


    OneLinkedList() {
        this->head = NULL;
        this->tail = NULL;

    }

    void push_front(int data) {
        Node* node = new Node(data);
        node->next = head;
        head = node;
        if (tail == NULL)tail = node;
    }

    void push_back(int data) {
        Node* node = new Node(data);
        if (head == NULL)head = node;
        if (tail == NULL)tail->next = node;
        head = node;
        tail = node;
    }

    } else {
     
    tail->next = node;
    tail = node;
    }
   }
};
int main() {
    OneLinkedList list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);

    list.push_back(4);
    list.push_back(5);

    return 0;
}