#include<iostream>
using namespace std;


// node structure
struct node
{
	int data;
	node* link;
};

// global head
node* head;



// funtion to insert a element in nth position in linked list
void insert_at_n(int a, int n)
{
	// making new node
	node* temp = new node();
	temp->data = a;
	temp->link = NULL;
	
	//check n=1(first position)
	if (n == 1) {temp->link = head; head = temp; return;}

	// move temporaray pointer to n-1 position
	node* temp1 = head;
	for (int i = 0; i < n - 2; ++i)
	temp1 = temp1->link;
	
	// adding temp node on nth position
	temp->link = temp1->link;
	temp1->link = temp;
}

// function to print a linked list
void print()
{
	// traverse whole linked list to print the elements
	node* temp = head;
	for (; temp != NULL;)
	{
		cout << temp->data << " ";
		temp = temp->link;

	} cout << endl;
}


int main() {
	
	// random inputs..
	head = NULL;
	// int n; cin >> n;
	// for (int i = 0; i < n; ++i) {int a; cin >> a; insert(a); print();}
	insert_at_n(2,1);	print();
	insert_at_n(3,2);	print();
	insert_at_n(4,3);	print();
	insert_at_n(5,2);	print();
	insert_at_n(6,1);
	print();
	return 0;
}
