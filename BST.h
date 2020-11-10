#include "UPC.h"
#include <stddef.h>

class BST
{
private:
    UPC *root;

public:
    BST() : root(NULL) {}
    void insert(const UPC &node);
    UPC &find(const UPC &node);
};