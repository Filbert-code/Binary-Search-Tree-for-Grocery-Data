#include "UPC.h"
#include <stddef.h>

class BST
{

public:
    BST() : root(NULL) {}
    void insert(const long &code);
    UPC &find(const long &code);

private:
    UPC *root;

    void insert(const long &code, UPC *&root);
    UPC *find(const long &code, UPC *&root);
};