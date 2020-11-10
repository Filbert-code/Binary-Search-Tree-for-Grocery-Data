//Started code for Assignment5
//You are allowed to add, but not remove statements

// BST<UPC> &buildTree(string filename)
// {
// 	// handles file input and returns the binary search tree
// }

// long &stol(string code)
// {
// 	// convert user inputted string to type long int
// }

// void performSearchBST(BST<UPC>, long key)
// {
// 	// searches the binary tree for the item description corresponding to the given UPC value
// }

// int main()
// {
// 	//...
// 	BST<UPC> tree = buildTree(filename); //build binary search tree of UPC objects

// 	string code;
// 	cout << "Please enter a UPC code(! to quit): ";
// 	cin >> code;
// 	while (code != "!")
// 	{

// 		long entry = stol(code); //convert user inputted string to type long int
// 		UPC key(entry);
// 		performSearchBST(tree, key);

// 		cout << "\nPlease enter a UPC code(! to quit): ";
// 		cin >> code;
// 	}

// 	return 0;
// }

#include "BST.h"
#include <iostream>
using namespace std;

int main()
{

	BST b;
	long l1 = 12345;
	long l2 = 54321;

	b.insert(l1);
	b.insert(l2);

	cout << b.find(l2).data << endl;

	return 0;
}