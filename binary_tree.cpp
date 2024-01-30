#include <bits/stdc++.h>

struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(char value) : data(value), left(NULL), right(NULL) {}
};

int main() {
    TreeNode* root = new TreeNode('A');
    TreeNode* nodeB = new TreeNode('B');
    TreeNode* nodeC = new TreeNode('C');
    root->left = nodeB;
    root->right = nodeC;
    delete root;
    delete nodeB;
    delete nodeC;

    return 0;
}

