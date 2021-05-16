#pragma once
#include <string>

using namespace std;
struct Node
{
	string val;
	Node* right;
	Node* left;
	int count;
	Node(string str = "") : count(1), left(nullptr),
		right(nullptr), val(str) {};
};

class Tree
{
protected:
	Node* root = nullptr;

public:
	Node* GetRoot() { return root; };
	int Search(string str);
	void Insert(string str);

};
