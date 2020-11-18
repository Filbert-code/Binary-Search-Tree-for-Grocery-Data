//Started code for Assignment5
//You are allowed to add, but not remove statements
// #include "UPC.h"

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

// 		long entry = stoll(code); //convert user inputted string to type long int
// 		UPC key(entry);
// 		performSearchBST(tree, key);

// 		cout << "\nPlease enter a UPC code(! to quit): ";
// 		cin >> code;
// 	}

// 	return 0;
// }

#include "BST.cpp"
#include "UPC.h"
#include <iostream>
#include <regex>
#include <cstdlib>
using namespace std;

int main()
{

	BST<UPC> b;
	UPC u1("12345", "Eating food is my profession");
	b.insert(u1);
	UPC u2("23456", "I can swim faster than a dolphin");
	UPC u3("1234", "Hello kitty");
	UPC u4("1243", "Chessbrahs");

	b.insert(u2);
	b.insert(u3);
	b.insert(u4);

	UPC key1("1234");

	cout << b.find(key1).data.getDescription() << endl;

	// long l3 = 982342342;
	// string l4 = "079400847201";
	// regex str_expr("^[1-9]\\d+$");
	// while (!regex_match(l4, str_expr))
	// {
	// 	l4 = l4.substr(1, l4.length() - 1);
	// }
	// long l5 = 1928;
	// long l6 = 23423;

	// b.insert(l1);
	// b.insert(l2);
	// b.insert(l3);
	// long long i = stoll(l4);
	// b.insert(i);
	// b.insert(l5);
	// b.insert(l6);

	return 0;
}