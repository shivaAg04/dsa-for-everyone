#include<iostream>
using namespace std;

// Reversing the Linked List using Recursive approach------>>



// node structure
struct node
{
	int data;
	node* link;
};
// global head
node* head;


// function to insert a element at beginning of linked list
void insert(int a)
{
	// making new node
	node* temp = new node();

	temp->data = a;
	temp->link = head;

	head = temp;

}

// function to print the linked list
void print()
{
	node* temp = head;
	// traverse whole linked list to print data of nodes
	for (; temp != NULL;)
	{
		cout << temp->data << " ";
		temp = temp->link;
	} cout << endl;
}




//====  reversing the linked list using recursion ====
void reverse_by_rec(node* prev, node* next)
{
	// base condition
	if (next == NULL) {head = prev; return;}
	// calling itself by passing current & next node link
	reverse_by_rec(next, next->link);
	// changing node link to previous node address
	next->link = prev;
}




int main() {
	head = NULL;

	// random/user inputs ..
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {int a; cin >> a; insert(a);}

	print();

	// call reverse function passes null & head
	reverse_by_rec(NULL, head);
	
	print();
	return 0;
}

