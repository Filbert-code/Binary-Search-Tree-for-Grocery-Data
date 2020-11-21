// Author: Alex Filbert
// Date: 11/19/2020
// Course: CS 300B
// Assignment: Homework 5
#ifndef BST_H
#define BST_H

#include "BSTNode.h"
#include <stddef.h>

// stands for binary search tree and is the data structure involing binary trees
template <class T>
class BST
{

public:
    BST() : root(NULL) {}
    void insert(T &item);
    BSTNode<T> &find(T &item);

private:
    BSTNode<T> *root;

    void insert(T &item, BSTNode<T> *&root);
    BSTNode<T> *find(T &item, BSTNode<T> *&root);
};

#endif