#ifndef NODE_H
#define NODE_H

struct Node {
    int val;
    Node* next;
} *head;

void push_front(Node* head, int val) {
    Node* res = new Node();
    res->val = val;
    res->next = head;
} 
#endif // NODE_H
