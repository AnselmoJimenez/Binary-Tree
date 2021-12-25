#pragma once

#ifndef BINARYTREE_H_
#define BINARYTREE_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    void *data;
    struct node *leftchild;
    struct node *rightchild;
} node_t;

typedef struct tree {
    node_t *root;
    int count;
} binary_tree_t;

// Create the binary tree
binary_tree_t createBinaryTree();

// Destroy the binary tree
void destroyBinaryTree();

// Inserts a node into the tree
void insert(binary_tree_t *tree, int data);

// Remove a node from the tree
void delete(binary_tree_t *tree, int data);

// Finds a node in the tree
node_t find(binary_tree_t *tree, int data);

// prints tree
void printTree(binary_tree_t *tree);

#endif
