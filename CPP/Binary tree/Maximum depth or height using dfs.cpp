// Follow the below steps to Implement the idea:

// Recursively do a Depth-first search.
// If the tree is empty then return -1
// Otherwise, do the following
// Get the max depth of the left subtree recursively  i.e. call maxDepth( tree->left-subtree)
// Get the max depth of the right subtree recursively  i.e. call maxDepth( tree->right-subtree)
// Get the max of max depths of left and right subtrees and add 1 to it for the current node.
// max_depth = max(max dept of left subtree,  max depth of right subtree) + 1
// Return max_depth.

// C++ program to find height of tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node {
public:
	int data;
	node* left;
	node* right;
};

/* Compute the "maxDepth" of a tree -- the number of
	nodes along the longest path from the root node
	down to the farthest leaf node.*/
int maxDepth(node* node)
{
	if (node == NULL)
		return 0;
	else {
		/* compute the depth of each subtree */
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

// Driver code
int main()
{
	node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Height of tree is " << maxDepth(root);
	return 0;
}

// This code is contributed by Amit Srivastav
