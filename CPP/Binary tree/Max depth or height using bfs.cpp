// Follow the below steps to Implement the idea:

// Traverse the tree in level order traversal starting from root.
// Initialize an empty queue Q, a variable depth and push root, then push null into the Q.
// Run a while loop till Q is not empty.
// Store the front element of Q and Pop out the front element.
// If the front of Q is NULL then increment depth by one and if queue is not empty then push NULL into the Q.
// Else if the element is not NULL then check for its left and right children and if they are not NULL push them into Q.
// Return depth.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// A Tree node
struct Node {
	int key;
	struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return (temp);
}

/*Function to find the height(depth) of the tree*/
int height(struct Node* root)
{

	// Initialising a variable to count the
	// height of tree
	int depth = 0;

	queue<Node*> q;

	// Pushing first level element along with NULL
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		// When NULL encountered, increment the value
		if (temp == NULL) {
			depth++;
		}

		// If NULL not encountered, keep moving
		if (temp != NULL) {
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}

		// If queue still have elements left,
		// push NULL again to the queue.
		else if (!q.empty()) {
			q.push(NULL);
		}
	}
	return depth;
}

// Driver program
int main()
{
	// Let us create Binary Tree shown in above example
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Height(Depth) of tree is: " << height(root);
}
