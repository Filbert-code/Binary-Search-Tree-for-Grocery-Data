#ifndef UPC_H
#define UPC_H

class UPC
{
public:
    long data;
    UPC *left;
    UPC *right;

    UPC(long &key, UPC *lt, UPC *rt) : data(key), left(lt), right(rt) {}

    bool operator<=(const UPC &lhs)
    {
        return data <= lhs.data;
    }
    bool operator<(const UPC &lhs)
    {
        return data < lhs.data;
    }
    bool operator==(const UPC &lhs)
    {
        return data == lhs.data;
    }
};

#endif