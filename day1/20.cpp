
#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>


using namespace std;

struct node {
    int value;
    node* left;
    node* right;

    node(int val) : value(val), left(nullptr), right(nullptr) {}
};

int level(node* root) {
    if (root == nullptr)
        return 0;
    else {
        int left_depth = level(root->left);
        int right_depth = level(root->right);
        return max(left_depth, right_depth) + 1;
    }
}

int main() {

    node* root = new node(12);
    root->left = new node(8);
    root->right = new node(18);
    root->left->left = new node(5);
    root->left->right = new node(11);

    cout << level(root) << endl;

    return 0;
}
	
