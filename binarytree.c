#include "binarytree.h"

// Create the binary tree
binary_tree_t *createBinaryTree() {
    binary_tree_t *tree = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    tree->root = NULL;
    tree->count = 0;
    tree->level = 0;

    return tree;
}

// destroys the binary tree and frees memory
void destroyBinaryTree();

// Inserts a node into the tree
void insert(binary_tree_t *tree, int data) {
    node_t *newNode = (node_t *) malloc(sizeof(node_t));
    newNode->data = data;
    newNode->leftChild = NULL;
    newNode->rightchild = NULL;

    if (tree->root == NULL) { tree->root = newNode; }
    else {
        // traverse thru the tree and find the next available slot
        // prioritizing the left most node
    }
}

// Remove a node from the tree
void delete(binary_tree_t *tree, int data);

// Finds a node in the tree
node_t *find(binary_tree_t *tree, int data);

// prints the contents of the tree
void printTree(binary_tree_t *tree);

int main() {
    
}