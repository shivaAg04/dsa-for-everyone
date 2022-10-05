#include<iostream>
#include<bits/stdc++.h>
#include "creation.h"
using namespace std;
void proder(Node *root)
{
    if(root==NULL) return ;
    cout<<root->data<<" ";
    proder(root->left);
    proder(root->right);
}
int main()
{

return 0; 
 }
 