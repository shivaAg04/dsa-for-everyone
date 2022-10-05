// Operations on Deque: Mainly the following four basic operations are performed on queue:
// insertFront(): Adds an item at the front of Deque.
// insertLast(): Adds an item at the rear of Deque.
// deleteFront(): Deletes an item from the front of Deque.
// deleteLast(): Deletes an item from the rear of Deque. In addition to the above operations, the following operations are also supported.
// getFront(): Gets the front item from the queue.
// getRear(): Gets the last item from queue.
// isEmpty(): Checks whether Deque is empty or not.
// isFull(): Checks whether Deque is full or not.

// CPP program to demonstrate
// Implementation of front() function
#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> mydeque;
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(1);
	mydeque.push_back(7);
	mydeque.push_back(3);
    mydeque.pop_back();
    mydeque.push_front(8);
	// Queue becomes 8, 3, 4, 1, 7

	cout << mydeque.front();
    cout << mydeque.back();

	return 0;
}
