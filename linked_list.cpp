#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int num;
    struct Node* next;

struct Node* head;

void createNodeList(int n);
void displayList();

int main() {
    int n;
    cout << "Number of nodes: ";
    cin >> n;
    createNodeList(n);
    cout<"Data entered: ";
    displayList();
    return 0;
}

void createNodeList(int n) {
    struct Node* fnNode;
    struct Node* tmp;
    int num, i;
    head = new Node;

    if (head == NULL) {
        cout << "Memory cannot be allocated." << endl;
    } else {
        cout << "Input data for node 1: ";
        cin >> num;
        head->num = num;
        head->next = NULL;
        tmp = head;

        for (i = 2; i <= n; i++) {
            fnNode = new Node;
            if (fnNode == NULL) {
                cout << "Memory cannot be allocated." << endl;
                break;
            } else {
                cout << "Input data for node " << i << ": ";
                cin >> num;

                fnNode->num = num;
                fnNode->next = NULL;

                tmp->next = fnNode;
                tmp = tmp->next;
            }
        }
    }
}

void displayList() {
    struct Node* tmp;
    if (head == NULL) {
        cout << "List is empty." << endl;
    } else {
        tmp = head;
        while (tmp != NULL) {
            cout<<"Data: "<<tmp->num<<endl;
			tmp = tmp->next;
        }
    }
}

