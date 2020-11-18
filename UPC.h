#ifndef UPC_H
#define UPC_H
#include <string>
#include <cstdlib>
using namespace std;

class UPC
{
private:
    string description;
    string upc_num;

public:
    UPC(string numUPC, string descr) : upc_num(numUPC), description(descr) {} // 2-arg constructor
    UPC(string numUPC)
    {
        upc_num = numUPC;
        description = "";
    } // 1-arg constructor

    string getUPC() { return upc_num; }
    string getDescription() { return description; }

    bool operator<=(const UPC &lhs)
    {
        long long upc_long = stoll(upc_num);
        return upc_long <= stoll(lhs.upc_num);
    }
    bool operator<(const UPC &lhs)
    {
        long long upc_long = stoll(upc_num);
        return upc_long < stoll(lhs.upc_num);
    }
    bool operator==(const UPC &lhs)
    {
        long long upc_long = stoll(upc_num);
        return upc_long == stoll(lhs.upc_num);
    }
};

#endif