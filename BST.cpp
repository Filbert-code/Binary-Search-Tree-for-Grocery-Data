// Author: Alex Filbert
// Date: 11/19/2020
// Course: CS 300B
// Assignment: Homework 5
#include "BST.h"
#include "UPC.h"
#include <iostream>
using namespace std;

// add a new node to the binary tree
template <class T>
void BST<T>::insert(T &item)
{
    insert(item, root);
}

// insert helper function that inserts the new node
template <class T>
void BST<T>::insert(T &item, BSTNode<T> *&root)
{
    if (root == NULL)
    {
        root = new BSTNode<T>(item, NULL, NULL);
    }
    else if (item < root->data)
    {
        insert(item, root->left);
    }
    else if (root->data < item)
    {
        insert(item, root->right);
    }
    else
        cout << "Error inserting the node" << endl;
}

// find and return a node inside the binary tree
template <class T>
BSTNode<T> &BST<T>::find(T &item)
{
    return *find(item, root);
}

// helper function that helps return a node inside the binary tree
template <class T>
BSTNode<T> *BST<T>::find(T &item, BSTNode<T> *&root)
{
    while (root != NULL)
    {
        if (item < root->data)
        {
            root = root->left;
        }
        else if (root->data < item)
        {
            root = root->right;
        }
        else
        {
            return root;
        }
    }
    BSTNode<T> *node = new BSTNode<T>(0000, NULL, NULL);
    return node;
}
