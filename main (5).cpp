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

    void show_all() {
        Node* tmp_node = head;
        std::cout << "All nodes: ";
        while(true) {
        std::cout << tmp_node->data << " ";
        tmp_node = tmp_node->next;
        }
        std::cout << std::endl;
    }    
    
    void show_head() {
        if (head != NULL) 
            std::cout << "Head: " << head->data << std::endl;
        else
            std::cout << "List is empty" << std::endl;
    }


int main() {
    OneLinkedList list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);

    list.push_back(4);
    list.push_back(5);

    list.show_all(); 
    list.show_head(); 

    return 0;
}