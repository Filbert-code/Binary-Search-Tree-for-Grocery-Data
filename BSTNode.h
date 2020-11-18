#ifndef BSTNode_H
#define BSTNode_H

template <class T>
class BSTNode
{
public:
    T data;
    BSTNode *left;
    BSTNode *right;

    BSTNode(T key, BSTNode *lt, BSTNode *rt) : data(key), left(lt), right(rt) {}

    bool operator<=(const BSTNode &lhs)
    {
        return data <= lhs.data;
    }
    bool operator<(const BSTNode &lhs)
    {
        return data < lhs.data;
    }
    bool operator==(const BSTNode &lhs)
    {
        return data == lhs.data;
    }
};

#endif