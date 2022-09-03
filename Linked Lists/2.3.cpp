#include "node.h"
#include <iostream>

Node* deleteMiddleNode(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* fast = head;
    Node* slow = head;
    Node* prev = head;
    fast = fast->next->next;
    slow = slow->next;
    while (fast && fast->next) {
        slow = slow ->next;
        prev = prev->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
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
    head = deleteMiddleNode(head);
    while (head) {
        std::cout << head->val << "  ";
        head = head->next;
    }
    std::cout << std::endl;
    return 0;
}
