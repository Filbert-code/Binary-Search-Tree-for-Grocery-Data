// Author: Alex Filbert
// Date: 11/19/2020
// Course: CS 300B
// Assignment: Homework 5
#include "BST.cpp"
#include "UPC.h"
#include <iostream>
#include <fstream>
#include <regex>
#include <cstdlib>
#include <time.h>
using namespace std;

// returns a BST object that has the file data
BST<UPC> &buildTree(string filename)
{
	// handles file input and returns the binary search tree
	BST<UPC> *bst = new BST<UPC>;
	string line;
	ifstream file(filename);
	getline(file, line); // skip the first line
	while (getline(file, line))
	{
		// insert input into BST
		int comma_index = line.find(",");
		string upc_code = line.substr(0, comma_index);
		string description = line.substr(comma_index + 1);
		UPC upc(upc_code, description);
		bst->insert(upc);
	}
	return *bst;
}

// searches the binary tree for the key argument and keeps track of execution time
void performSearchBST(BST<UPC> bst, UPC key)
{
	// searches the binary tree for the item description corresponding to the given UPC value
	clock_t t;
	t = clock();

	if (bst.find(key).data.getDescription() == "")
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << bst.find(key).data.getDescription() << endl;
		t = clock() - t;
		cout << "Lookup time: " << t << " milliseconds" << endl;
	}
}

int main()
{
	string filename = "grocery_upc_database.csv";
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