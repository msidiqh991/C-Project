#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int key;
    int height;
    Node* left;
    Node* right;

    Node(int key) {
        this->key = key;
        this->height = 1;
        this->left = NULL;
        this->right = NULL;
    }
};

int getHeight(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return node->height;
}

int getBalanceFactor(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
}

void updateHeight(Node* node) {
    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
}

Node* rotateRight(Node* node) {
    Node* leftChild = node->left;
    node->left = leftChild->right;
    leftChild->right = node;

    updateHeight(node);
    updateHeight(leftChild);

    return leftChild;
}

Node* rotateLeft(Node* node) {
    Node* rightChild = node->right;
    node->right = rightChild->left;
    rightChild->left = node;

    updateHeight(node);
    updateHeight(rightChild);

    return rightChild;
}

Node* insert(Node* root, int key) {
    if (root == NULL) {
        return new Node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }

    updateHeight(root);

    int balanceFactor = getBalanceFactor(root);

    // Left-left case
    if (balanceFactor > 1 && key < root->left->key) {
        return rotateRight(root);
    }
    // Right-right case
    if (balanceFactor < -1 && key > root->right->key) {
        return rotateLeft(root);
    }
    // Left-right case
    if (balanceFactor > 1 && key > root->left->key) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    // Right-left case
    if (balanceFactor < -1 && key < root->right->key) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
}
