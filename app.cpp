//Started code for Assignment5
//You are allowed to add, but not remove statements
#include "BST.cpp"
#include "UPC.h"
#include <iostream>
#include <fstream>
#include <regex>
#include <cstdlib>
using namespace std;

BST<UPC> &buildTree(string filename)
{
	// handles file input and returns the binary search tree
	BST<UPC> *bst = new BST<UPC>;
	string line;
	ifstream file;
	file.open(filename);
	while (getline(file, line))
	{
		// insert input into BST
		int tab_index = line.find("\t");
		string upc_code = line.substr(0, tab_index);
		string description = line.substr(tab_index + 1);
		UPC upc(upc_code, description);
		bst->insert(upc);
	}
	return *bst;
}

void performSearchBST(BST<UPC> bst, UPC key)
{
	// searches the binary tree for the item description corresponding to the given UPC value
	cout << bst.find(key).data.getDescription() << endl;
}

int main()
{
	string filename = "ass5_data.txt";
	BST<UPC> tree = buildTree(filename); //build binary search tree of UPC objects

	string code;
	cout << "Please enter a UPC code(! to quit): ";
	cin >> code;
	while (code != "!")
	{

		long long entry = stoll(code); //convert user inputted string to type long int
		UPC key(entry);
		performSearchBST(tree, key);

		cout << "\nPlease enter a UPC code(! to quit): ";
		cin >> code;
	}

	return 0;
}