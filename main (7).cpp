#include <iostream>

class Node {
public:
    int data; 
    Node* next;
    
    Node(int data) : data(data), next(NULL) {} 
};

class OneLinkedList { 
public:
    Node* head, * tail;

    OneLinkedList() {
        this->head = NULL; 
        this->tail = NULL;
    }

    void pop_front() {
        if (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp; 
        }
    }
    void pop_back() {
        if (head == NULL) {
            return;
        }
        
        if (head == tail) { 
            delete head;
            head = tail = NULL;
        } else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = NULL;
        }
    }

    void push_front(int data) {
        Node* node = new Node(data); 
        node->next = head;
        head = node;
        if (tail == NULL) tail = node;
    }

    void push_back(int data) {
        Node* node = new Node(data);
        if (head == NULL) head = node;
        if (tail == NULL) tail = node;
        else {
            tail->next = node;
            tail = node;
        }
    }

    void show_all() {
        Node* tmp_node = head;
        std::cout << "All nodes: ";
        while (tmp_node != NULL) { 
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
};

int main() {
    OneLinkedList list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);

    list.push_back(4);
    list.push_back(5);

    list.show_all(); 
    list.show_head(); 

    list.pop_back();
    
    list.show_all(); 
    list.show_head(); 
    return 0;
}
