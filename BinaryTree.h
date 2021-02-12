#pragma once
#include<iostream>


class Btree {
private:
	class TreeNode {
		friend class Btree;
		int value;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int value, TreeNode* l = NULL, TreeNode* r = NULL);
	};

	// Pointer to the root of the tree
	TreeNode* root;

	// helper functions
	void insert(TreeNode *&, int);
};

// TreeNode constructor inside Btree Class
Btree::TreeNode::TreeNode(int val, TreeNode* l = NULL, TreeNode* r = NULL) {
	value = val;
	left = l;
	right = r;
}

