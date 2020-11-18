#ifndef BST_H
#define BST_H

#include "BSTNode.h"
#include <stddef.h>

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