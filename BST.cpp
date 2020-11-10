#include "BST.h"
#include <iostream>
using namespace std;

void BST::insert(const long &code)
{
    insert(code, root);
}

void BST::insert(const long &code, UPC *&root)
{
    long num = code;
    UPC *newNode = new UPC(num, NULL, NULL);
    if (root == NULL)
    {
        root = newNode;
    }
    else if (code < root->data)
    {
        insert(code, root->left);
    }
    else if (root->data < code)
    {
        insert(code, root->right);
    }
    else
        cout << "Error inserting the node" << endl;
}

UPC &BST::find(const long &code)
{
    return *find(code, root);
}

UPC *BST::find(const long &code, UPC *&root)
{
    long num = code;
    UPC newNode(num, NULL, NULL);
    while (root != NULL)
    {
        if (code < root->data)
        {
            root = root->left;
        }
        else if (root->data < code)
        {
            root = root->right;
        }
        else
        {
            return root;
        }
    }
    return NULL;
}
