#include "Tree.h"

int Tree::Search(string str)
{
	Node* tmp = root;
	while (tmp != nullptr)
	{
		if (tmp->val < str)
		{
			tmp = tmp->right;
		}
		else if (tmp->val > str)
		{
			tmp = tmp->left;
		}
		else if (tmp->val == str)
		{
			return tmp->count;
		}
	}
	return 0;
}

void Tree::Insert(string str)
{
	if (root == nullptr)
	{
		Node* new_elem = new Node(str);
		root = new_elem;
		return;
	}
	Node* tmp = root;
	while (tmp != nullptr)
	{
		if ((str > tmp->val) && (tmp->right == nullptr))
		{
			Node* new_elem = new Node(str);
			tmp->right = new_elem;
			return;
		}
		else if (str > tmp->val)
		{
			tmp = tmp->right;
			continue;
		}

		if ((str < tmp->val) && (tmp->left == nullptr))

		{
			Node* new_elem = new Node(str);
			tmp->left = new_elem;
			return;
		}
		else if (str < tmp->val)
		{
			tmp = tmp->left;
			continue;
		}

		if (str == tmp->val)
		{
			tmp->count++;
			return;
		}
	}
}
