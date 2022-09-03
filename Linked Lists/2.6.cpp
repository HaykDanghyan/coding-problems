#include "node.h"
#include <iostream>
#include <algorithm>
bool isPalindrome(Node* head) {
    std::string str1, copy;
    while (head) {
        str1 += std::to_string(head->val);
        head = head->next;
    }
    copy = str1;
    std::reverse(copy.begin(), copy.end());
    return copy == str1;
}

int main() {
    Node* head = new Node;
    head->val = 1;
    head->next = new Node;
    head->next->val = 2;
    head->next->next = new Node;
    head->next->next->val = 2;
    head->next->next->next = new Node;
    head->next->next->next->val = 1;
    std::cout << std::boolalpha << isPalindrome(head) << std::endl;
    return 0;
}