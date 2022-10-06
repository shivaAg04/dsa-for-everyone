// Operation to return minimum element in a stack in constant time

#include <iostream>
#include <stack>
using namespace std;
 
class MinStack
{
    stack<int> s;       // main stack to store elements
    stack<int> aux;     // auxiliary stack to store minimum elements
 
public:
    // Inserts a given element on top of the stack
    void push(int val)
    {
        // push the given element into the main stack
        s.push(val);
 
        // if the auxiliary stack is empty, push the given element into it
        if (aux.empty()) {
            aux.push(val);
        }
        else {
            // push the given element into the auxiliary stack
            // if it is less than or equal to the current minimum
            if (aux.top() >= val) {
                aux.push(val);
            }
        }
    }
 
    // Removes the top element from the stack and returns it
    int pop()
    {
        // remove the top element from the main stack
        int top = s.top();
        s.pop();
 
        // remove the top element from the auxiliary stack only if it is minimum
        if (top == aux.top()) {
            aux.pop();
        }
 
        // return the removed element
        return top;
    }
 
    // Returns the top element of the stack
    int top() {
        return s.top();
    }
 
    // Returns the total number of elements in the stack
    int size() {
        return s.size();
    }
 
    // Returns the true if the stack is empty; false otherwise
    bool isEmpty() {
        return s.empty();
    }
 
    // Returns the minimum element from the stack in constant time
    int getMin()
    {
        return aux.top();
    }
};
 
int main()
{
    MinStack s;
 
    s.push(6);
    cout << s.getMin() << endl;    // prints 6
 
    s.push(7);
    cout << s.getMin() << endl;    // prints 6
 
    s.push(8);
    cout << s.getMin() << endl;    // prints 6
 
    s.push(5);
    cout << s.getMin() << endl;    // prints 5
 
    s.push(3);
    cout << s.getMin() << endl;    // prints 3
 
    cout << s.pop() << endl;    // prints 3
    cout << s.getMin() << endl;    // prints 5
 
    s.push(10);
    cout << s.getMin() << endl;    // prints 5
 
    cout << s.pop() << endl;    // prints 10
    cout << s.getMin() << endl;    // prints 5
 
    cout << s.pop() << endl;    // prints 5
    cout << s.getMin() << endl;    // prints 6
 
    return 0;
}
