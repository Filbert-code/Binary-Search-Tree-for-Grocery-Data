#ifndef UPC_H
#define UPC_H
#include <string>
#include <cstdlib>
using namespace std;

class UPC
{
private:
    string description;
    string upc_str;     // actual UPC code (might have prepending zeros)
    long long upc_long; // unique UPC code in long-type

public:
    UPC(string numUPC, string descr) : upc_str(numUPC), description(descr) { upc_long = stoll(upc_str); } // 2-arg constructor
    UPC(long long numUPC)
    {
        this->upc_long = numUPC;
        this->upc_str = "";
        this->description = "";
    } // 1-arg constructor

    string getUPC() { return upc_str; }
    string getDescription() { return description; }

    bool operator<=(const UPC &lhs)
    {
        return upc_long <= lhs.upc_long;
    }
    bool operator<(const UPC &lhs)
    {
        return upc_long < lhs.upc_long;
    }
    bool operator==(const UPC &lhs)
    {
        return upc_long == lhs.upc_long;
    }
};

#endif