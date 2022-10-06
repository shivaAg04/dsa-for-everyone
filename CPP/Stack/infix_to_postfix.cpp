#include <iostream>
#include <stack>
#include <string>
#include <climits>
using namespace std;
 
// Utility function to return precedence of the given operator.
// Note that higher is the precedence, lower is its value
int prec(char c)
{
    // Multiplication and division
    if (c == '*' || c == '/') {
        return 3;
    }
 
    // Addition and subtraction
    if (c == '+' || c == '-') {
        return 4;
    }
 
    // Bitwise AND
    if (c == '&') {
        return 8;
    }
 
    // Bitwise XOR (exclusive or)
    if (c == '^') {
        return 9;
    }
 
    // Bitwise OR (inclusive or)
    if (c == '|') {
        return 10;
    }
 
    // add more operators if needed
 
    return INT_MAX;            // for opening bracket '('
}
 
// Utility function to check if a given token is an operand
bool isOperand(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}
 
// Function to convert an infix expression to a postfix expression.
// This function expects a valid infix expression
string infixToPostfix(string infix)
{
    // create an empty stack for storing operators
    stack<char> s;
 
    // create a string to store the postfix expression
    string postfix;
 
    // process the infix expression from left to right
    for (char c: infix)
    {
        // Case 1. If the current token is an opening bracket '(', push it into the stack
        if (c == '(') {
            s.push(c);
        }
 
        // Case 2. If the current token is a closing bracket ')'
        else if (c == ')')
        {
            while (s.top() != '(')
            {
                postfix.push_back(s.top());
                s.pop();
            }
            s.pop();
        }
 
        // Case 3. If the current token is an operand, append it at the end of the postfix expression
        else if (isOperand(c)) {
            postfix.push_back(c);
        }
 
        // Case 4. If the current token is an operator
        else {
            while (!s.empty() && prec(c) >= prec(s.top()))
            {
                postfix.push_back(s.top());
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty())
    {
        postfix.push_back(s.top());
        s.pop();
    }
    return postfix;
}
 
int main()
{
    string infix = "A*(B*C+D*E)+F";
    string postfix = infixToPostfix(infix);
    cout << postfix << endl;
    return 0;
}
