Node* intersection(Node* headA, Node* headB) {
    if (headA == nullptr || headB == nullptr) {
            return headA;
        }
    Node* curr1 = headA;
    Node* curr2 = headB;
        while (curr1 || curr2) {
            if (!curr1) {
                curr1 = headB;
            } 
            if (!curr2) {
                curr2 = headA;
            }
            if (curr1 == curr2) {
                return curr1;
            } 
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return nullptr;
}