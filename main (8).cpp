#include <iostream>

class Node {
public:
    int data; 
    Node* next;
    Node* prev;
    
    Node(int data) : data(data), next(NULL) {} 
};

class TwoLinkedList { 
public:
    Node* head, * tail;

   TwoLinkedList() {
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

   void push_front(int data) {
        Node* tmp_node = new Node(data);
        tmp_node->next = head;
        head = tmp_node;
    }
    void show_head() {
        if (head != NULL) {
            std::cout << "Head: " << head->data << std::endl;
            
            Node* tmp = head->next;
            tmp_node = tmp_node->prev;
            std::cout << "Prev from next" << tmp_node <<std::endl;
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

};   
    
int main() {
    TwoLinkedList list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
  

    list.show_all(); 
    list.show_head(); 

    
    return 0;
}
