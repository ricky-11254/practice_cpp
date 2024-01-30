#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
        current = current->next;
    }
    if (carry > 0) {
        current->next = new ListNode(carry);
    }
    return dummy->next;
}
void printList(ListNode* head) {
    while (head != NULL) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    ListNode* result = addTwoNumbers(l1, l2);
    printList(result);
    ListNode* l3 = new ListNode(0);
    ListNode* l4 = new ListNode(0);
    ListNode* result2 = addTwoNumbers(l3, l4);
    printList(result2);
    ListNode* l5 = new ListNode(9);
    l5->next = new ListNode(9);
    l5->next->next = new ListNode(9);
    l5->next->next->next = new ListNode(9);
    l5->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next->next = new ListNode(9);
    ListNode* l6 = new ListNode(9);
    l6->next = new ListNode(9);
    l6->next->next = new ListNode(9);
    l6->next->next->next = new ListNode(9);
    ListNode* result3 = addTwoNumbers(l5, l6);
    printList(result3);
    return 0;
}