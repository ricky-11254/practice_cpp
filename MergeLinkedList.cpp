#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Dummy node to simplify the code
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    // Traverse both lists and merge them
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    // If one of the lists is not fully traversed, append the remaining nodes
    if (list1 != nullptr) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    // Save the head of the merged list
    ListNode* result = dummy->next;

    // Clean up the dummy node
    delete dummy;

    return result;
}

// Function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example 1
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* mergedList1 = mergeTwoLists(list1, list2);
    printList(mergedList1);

    // Example 2
    ListNode* list3 = nullptr;
    ListNode* list4 = nullptr;

    ListNode* mergedList2 = mergeTwoLists(list3, list4);
    printList(mergedList2);

    // Example 3
    ListNode* list5 = nullptr;
    ListNode* list6 = new ListNode(0);

    ListNode* mergedList3 = mergeTwoLists(list5, list6);
    printList(mergedList3);

    return 0;
}
