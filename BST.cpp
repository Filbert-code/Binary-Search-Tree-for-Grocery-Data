#include "BST.h"
#include "UPC.h"
#include <iostream>
using namespace std;

template <class T>
void BST<T>::insert(T &item)
{
    insert(item, root);
}

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

template <class T>
BSTNode<T> &BST<T>::find(T &item)
{
    return *find(item, root);
}

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
