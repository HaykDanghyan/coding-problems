#include "node.h"
#include <iostream>

int returnKthFromLast(Node* head, int k) {
    Node* curr = head;
    int size = 0;
    while (curr) {
        curr = curr->next;
        size++;
    }
    size = abs(size - k);
    curr = head;
    while (size--) {
        curr = curr->next;
    }
    return curr->val; 
}

int main() {
    Node* head = new Node;
    head->val = 1;
    head->next = new Node;
    head->next->val = 2;
    head->next->next = new Node;
    head->next->next->val = 3;
    head->next->next->next = new Node;
    head->next->next->next->val = 4;
    head->next->next->next->next = new Node;
    head->next->next->next->next->val = 5;
    std::cout << returnKthFromLast(head, 2);
}