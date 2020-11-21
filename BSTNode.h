// Author: Alex Filbert
// Date: 11/19/2020
// Course: CS 300B
// Assignment: Homework 5
#ifndef BSTNode_H
#define BSTNode_H

// a class that stores our binary tree nodes
template <class T>
class BSTNode
{
public:
    T data;
    BSTNode *left;
    BSTNode *right;

    BSTNode(T key, BSTNode *lt, BSTNode *rt) : data(key), left(lt), right(rt) {}

    // overloaded <= operator
    bool operator<=(const BSTNode &lhs)
    {
        return data <= lhs.data;
    }
    // overloaded < operator
    bool operator<(const BSTNode &lhs)
    {
        return data < lhs.data;
    }
    // overloaded == operator
    bool operator==(const BSTNode &lhs)
    {
        return data == lhs.data;
    }
};

#endif