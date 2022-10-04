/*
Given an array of positive integers arr[] and an integer x, The task is to find all unique combinations in arr[] where the sum is equal to x.

sample input:
4
1 2 3 4
5
output:
1 1 1 1 1 
1 1 1 2
1 1 3
1 2 2
1 4
2 3
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Print_All_Combination_sum(int index,int target,vector<int>&v,vector<int>&temp,vector<vector<int>>&ans)
{
   // base case
   if(target==0)
   {
    // push_back the temp into the ans if the target value becomes zero 
    ans.push_back(temp);
    return ;
    
   }
   if(index==v.size()) return ; // return if the index goes out of the array

   // recursive case
   if(v[index]<=target) // if the current v[index] is less then or equal to target value take the value in to the temp array
   {
    temp.push_back(v[index]);
    // take the v[index] in to the temp array
    Print_All_Combination_sum(index,target-v[index],v,temp,ans);
    temp.pop_back(); // pop_back the element from temp value as backtraking step
   }
   Print_All_Combination_sum(index+1,target,v,temp,ans);
}
int main() {
      int n; // size of the array 
    cin>>n; // input the value of the n
    vector<int>v; // vector which stores the values of the array
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;  // targe value
    vector<vector<int>>ans; // ans for storing the subsequence of the array
    vector<int>temp; // temp array to store the subsequence
    Print_All_Combination_sum(0,target,v,temp,ans);
    // Print all the combinational vectors for the target value

    
    for(auto it:ans)
    {
        for(auto i:it) cout<<i<<" ";
        cout<<endl;
    }
     
 return 0; 
 }