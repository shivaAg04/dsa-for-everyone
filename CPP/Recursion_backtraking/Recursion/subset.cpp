/*
subsets of an array is the basically the subsequence of the array 
difference between the subsequence and subset is the subset has no order while subsequence should the order same as array
There 2^n subset of an array having n elements

let take sample input array
[1,3,7];
output:
[1]
[1,3]
[1,3,7]
[3,7]
[7]
[1,7] / [7,1]
[3]
[] // empty subset
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Print_All_the_subsets(int index,vector<int>v,vector<int>&temp,vector<vector<int>>&ans)
{
    if(index==v.size())
    {
        ans.push_back(temp);
        return ;
    }
    // recursive case
    // take the v[index] in to the temp array
    temp.push_back(v[index]);
    Print_All_the_subsets(index+1,v,temp,ans);
    temp.pop_back();

    // do not take the v[index] in to temp array
    Print_All_the_subsets(index+1,v,temp,ans);
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
    vector<vector<int>>ans; // ans for storing the subset of the array
    vector<int>temp; // temp array to store the subset
    Print_All_the_subsets(0,v,temp,ans);

     for(auto it:ans)
    {
        for(auto i:it) cout<<i<<" ";
        cout<<endl;
    }
 return 0; }